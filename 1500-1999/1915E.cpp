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
        ll n, sum = 0;
        cin >> n;
        int a[n], f = 0;
        map<ll, ll> mp;
        mp[0] = 1;
        rep(i, n)
        {
            cin >> a[i];
            if (i % 2 == 1)
                a[i] *= -1;
            sum += a[i];
            if (mp[sum])
                f = 1;
            mp[sum]++;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}