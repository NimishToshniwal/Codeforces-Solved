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
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        x -= a;
        y -= b;
        bool f = 1;
        if (x > 0 || y > 0)
        {
            if (x > 0)
            {
                if (x <= c)
                {
                    c -= x;
                }
                else
                {
                    f = 0;
                }
            }
            if (y > 0)
            {
                if (y <= c)
                {
                    c -= y;
                }
                else
                {
                    f = 0;
                }
            }
            if (f)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}