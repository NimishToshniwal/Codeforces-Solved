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
        vector<ll> v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        vector<ll> gcd(2);
        rep(i, n)
        {
            gcd[i % 2] = __gcd(gcd[i % 2], v[i]);
        }
        vector<bool> check(2, 1);
        rep(i, n)
        {
            check[i % 2] = check[i % 2] && (v[i] % gcd[(i % 2) ^ 1] > 0);
        }
        ll MAX = 0;
        if (check[0])
            MAX = max(MAX, gcd[1]);
        if (check[1])
            MAX = max(MAX, gcd[0]);
        cout << MAX << endl;
    }

    return 0;
}