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
        ll n, f = 0;
        cin >> n;
        for (ll i = 3; i <= 60; i++)
        {
            ll l = 2, r = pow(n, 1.0 / (i - 1)) + 2;
            while (l <= r)
            {
                ll m = (l + r) / 2, c = 0, curr = 1;
                for (int j = 0; j < i; j++)
                {
                    c += curr;
                    if (c > n)
                        break;
                    curr *= m;
                }
                if (c == n)
                {
                    f = 1;
                    break;
                }
                if (c > n)
                    r = m - 1;
                else
                    l = m + 1;
            }
            if (f)
                break;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}