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
        ll n, s1 = 0, s2 = 0, s = 0;
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
            s += a[i];
            if (i % 2)
                s2 += a[i];
            else
                s1 += a[i];
        }
        if (s1 <= s / 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    cout << 1 << " ";
                else
                    cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 1)
                    cout << 1 << " ";
                else
                    cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}