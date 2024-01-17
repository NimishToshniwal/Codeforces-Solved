#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        rep(i, n) cin >> v[i];
        rep(i, q)
        {
            int k;
            cin >> k;
            int pos = find(v.begin(), v.end(), k) - v.begin();
            cout << pos + 1 << " ";
            rotate(v.begin(), v.begin() + pos, v.begin() + pos + 1);
        }
    }

    return 0;
}