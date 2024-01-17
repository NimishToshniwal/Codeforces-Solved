#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

int main()
{

    ios::sync_with_stdio(false);

    ll x, MIN = INT_MAX, a, b;
    cin >> x;
    if (x == 1)
    {
        cout << 1 << " " << 1;
        return 0;
    }
    for (ll i = 1; i * i < x; i++)
    {
        if (x % i == 0 && __gcd(i, x / i) == 1)
        {
            a = i;
            b = x / i;
            MIN = max(a, b);
        }
    }
    cout << a << " " << b;

    return 0;
}