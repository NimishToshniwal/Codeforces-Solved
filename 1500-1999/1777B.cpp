#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
const ll MOD = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, x = 0;
        cin >> n;
        x = n * (n - 1);
        for (i = 1; i <= n; i++)
        {
            x = (x * i) % MOD;
        }
        cout << x << endl;
    }
    return 0;
}