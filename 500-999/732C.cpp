#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll b, d, s, MAX;
    cin >> b >> d >> s;
    MAX = max(b, max(d, s)) - 1;
    cout << max(MAX - b, 0ll) + max(MAX - d, 0ll) + max(MAX - s, 0ll);

    return 0;
}