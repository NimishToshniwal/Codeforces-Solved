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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        rep(i, n) cin >> v[i];
        ll MAX = 0, sum = 0;
        for (ll i = -1; i < n; i++)
        {
            ll curr = sum;
            for (ll j = i + 1; j < min(n, i + 32); j++)
            {
                ll a = v[j];
                a >>= (j - i);
                curr += a;
            }
            MAX = max(MAX, curr);
            // cout<<"MAX = "<<MAX<<endl;
            if (i != n - 1)
                sum += (v[i + 1] - k);
        }
        cout << MAX << endl;
    }

    return 0;
}