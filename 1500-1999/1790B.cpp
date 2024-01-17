#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r, k;
        cin >> n >> s >> r;
        k = s - r;
        vector<int> v(n - 1, r / (n - 1));
        for (int i = 0; i < (r % (n - 1)); i++)
        {
            v[i]++;
        }
        v.push_back(k);
        rep(i, n) cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}