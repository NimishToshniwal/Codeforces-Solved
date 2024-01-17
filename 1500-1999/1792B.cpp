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
        ll a, b, c, d, x = 0, y = 0, ans = 0;
        cin >> a >> b >> c >> d;
        if (a == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            ans = a + b + c + d;
            x += a;
            y += a;
            a = 0;
            if (b < c)
            {
                c -= b;
                b = 0;
            }
            else
            {
                b -= c;
                c = 0;
            }
            if (b > 0)
            {
                if (y >= b)
                {
                    y -= b;
                    x += b;
                    b = 0;
                }
                else
                {
                    x += y;
                    b -= y;
                    y = 0;
                }
            }
            if (c > 0)
            {
                if (x >= c)
                {
                    x -= c;
                    y += c;
                    c = 0;
                }
                else
                {
                    y += x;
                    c -= x;
                    x = 0;
                }
            }
            if (x >= d && y >= d)
            {
                d = 0;
            }
            else
            {
                d -= min(x, y);
            }
            ans -= (a + b + c + d);
            // cout<<"ans = "<<ans<<" x = "<<x<<" y = "<<y<<" b = "<<b<<" c = "<<c<<endl;
            if (b == 0 && c == 0 && d == 0)
                cout << ans << endl;
            else
                cout << ans + 1 << endl;
        }
    }

    return 0;
}