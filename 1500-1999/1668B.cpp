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
        ll a[n], sum = 0, MAX = -1, MIN = INT_MAX;
        rep(i, n)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] > MAX)
            {
                MAX = a[i];
            }
            if (a[i] < MIN)
            {
                MIN = a[i];
            }
        }
        if (n + sum + MAX - MIN <= m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}