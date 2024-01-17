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
        ll n, m;
        cin >> n >> m;
        ll t[n], l[n], h[n];
        rep(i, n)
        {
            cin >> t[i] >> l[i] >> h[i];
        }
        ll MIN = m, MAX = m, pre = 0, f = 1;
        rep(i, n)
        {
            MAX += t[i] - pre;
            MIN -= t[i] - pre;
            if (MAX < l[i] || MIN > h[i])
            {
                f = 0;
                // cout<<"i = "<<i<<endl;
                break;
            }
            MAX = min(MAX, h[i]);
            MIN = max(MIN, l[i]);
            pre = t[i];
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}