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
        int n;
        cin >> n;
        ll sum = 0;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
            if (i % 2 == 0)
            {
                sum -= a[i];
            }
            else
                sum += a[i];
        }
        if (sum >= 0 || n % 2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}