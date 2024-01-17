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
        ll n;
        ll c, q, x, y, k;
        cin >> n >> c >> q;
        string s, s1;
        s1 = "0";
        cin >> s;
        s1 = s1 + s;
        ll l[c + 1], r[c + 1], sz[c + 1];
        sz[0] = n;
        rep1(i, c)
        {
            cin >> l[i] >> r[i];
            sz[i] = sz[i - 1] + r[i] - l[i] + 1;
        }
        for (; q--;)
        {
            cin >> k;
            ll i = c;
            while (i > 0)
            {
                if (sz[i - 1] >= k)
                {
                    i--;
                }
                else
                {
                    k -= sz[i - 1];
                    k = l[i] + k - 1;
                    i--;
                }
            }
            cout << s1[k] << endl;
        }
    }

    return 0;
}