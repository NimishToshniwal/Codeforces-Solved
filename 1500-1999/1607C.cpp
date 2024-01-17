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
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << a[0] << endl;
        }
        else
        {
            sort(a, a + n);
            ll MAX = a[0];
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i + 1] - a[i] > MAX)
                {
                    MAX = a[i + 1] - a[i];
                }
            }
            cout << MAX << endl;
        }
    }
    return 0;
}