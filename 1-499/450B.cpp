#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
const ll MOD = 1e9 + 7;
int main()
{

    ios::sync_with_stdio(false);

    ll x, y, n;
    cin >> x >> y >> n;
    ll a[6] = {x, y, y - x, -1 * x, -1 * y, x - y};
    cout << ((a[(n - 1) % 6] % MOD) + MOD) % MOD;

    return 0;
}