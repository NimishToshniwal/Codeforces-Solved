#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<ll> v(n);
    ll GCD = 0;
    rep(i, n)
    {
        cin >> v[i];
        GCD = __gcd(GCD, v[i]);
    }
    int count = 0;
    for (ll i = 1; i * i <= GCD; i++)
    {
        if (GCD % i == 0)
        {
            count++;
            if (i * i != GCD)
                count++;
        }
    }
    cout << count << endl;

    return 0;
}