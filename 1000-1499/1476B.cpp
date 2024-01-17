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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        rep(i, n) cin >> v[i];
        ll MAX = 0, sum = v[0];
        for (int i = 1; i < n; i++)
        {
            MAX = max(MAX, (v[i] * 100ll - k * sum + k - 1) / k);
            sum += v[i];
        }
        cout << MAX << endl;
    }

    return 0;
}