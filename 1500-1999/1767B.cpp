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
        ll n, x;
        cin >> n;
        vector<ll> v(n - 1);
        cin >> x;
        rep(i, n - 1)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        rep(i, n - 1)
        {
            if (v[i] > x)
            {
                if ((x + v[i]) % 2 == 1)
                {
                    x = ((x + v[i]) / 2) + 1;
                }
                else
                {
                    x = (x + v[i]) / 2;
                }
            }
        }
        cout << x << endl;
    }

    return 0;
}