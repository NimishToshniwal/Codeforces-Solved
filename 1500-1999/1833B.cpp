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
        ll a[n], b[n], a1[n];
        map<ll, vector<ll>> mp;
        rep(i, n)
        {
            cin >> a[i];
        }
        rep(i, n)
        {
            cin >> b[i];
            a1[i] = a[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        rep(i, n)
        {
            mp[a[i]].push_back(b[i]);
        }
        rep(i, n)
        {
            cout << mp[a1[i]].back() << " ";
            mp[a1[i]].pop_back();
        }
        cout << endl;
    }

    return 0;
}