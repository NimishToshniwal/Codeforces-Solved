#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    cout << (m * (n / m - 1) + (n % m) * 2) * (n / m) / 2 << " " << ((n - m + 1) * (n - m) / 2);

    return 0;
}