#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
const ll N = 1e12;
int main()
{

    ios::sync_with_stdio(false);
    map<ll, int> mp;
    for (ll i = 1; i * i * i <= N; i++)
    {
        mp[i * i * i] = 1;
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        bool f = 0;
        for (ll i = 1; i * i * i <= n; i++)
        {
            if (mp.find(n - i * i * i) != mp.end())
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}