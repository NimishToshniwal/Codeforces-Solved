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
        ll n, r;
        cin >> n >> r;
        ll ans = 0;
        if (r >= n)
        {
            ans = (n * (n - 1)) / 2;
            cout << ans + 1 << endl;
        }
        else
        {
            cout << (r * (r + 1)) / 2 << endl;
        }
    }

    return 0;
}