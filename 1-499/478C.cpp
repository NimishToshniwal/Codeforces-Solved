#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll a, b, c;
    cin >> a >> b >> c;
    cout << min(a + b, min(b + c, min(a + c, (a + b + c) / 3)));

    return 0;
}