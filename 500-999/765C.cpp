#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll k, a, b;
    cin >> k >> a >> b;
    if (min(a, b) < k && max(a, b) % k != 0)
        cout << -1 << endl;
    else
        cout << ((a / k) + (b / k)) << endl;

    return 0;
}