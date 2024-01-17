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
        int n, a = INT_MAX, b = INT_MAX, c = INT_MAX, d = INT_MAX, k, ans = INT_MAX;
        string s;
        cin >> n;
        rep(i, n)
        {
            cin >> k;
            cin >> s;
            if (s == "00")
            {
                a = min(a, k);
            }
            else if (s == "01")
            {
                b = min(b, k);
            }
            else if (s == "10")
            {
                c = min(c, k);
            }
            else
            {
                d = min(d, k);
            }
        }
        bool f = 0;
        if (b > 0 && c > 0 && b != INT_MAX && c != INT_MAX)
        {
            ans = min(ans, b + c);
            f = 1;
        }
        if (d > 0 && d != INT_MAX)
        {
            ans = min(ans, d);
            f = 1;
        }
        if (f == 0)
            ans = -1;

        // cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<" d = "<<d<<endl;
        cout << ans << endl;
    }

    return 0;
}