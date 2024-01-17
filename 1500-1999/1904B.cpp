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
        vector<int> a(n), b(n);
        vector<ll> v(n);
        map<int, int> mp;
        rep(i, n)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        v[0] = b[0];
        for (int i = 1; i < n; i++)
            v[i] = v[i - 1] + b[i];
        mp[b[n - 1]] = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] >= b[i + 1])
                mp[b[i]] = mp[b[i + 1]];
            else
                mp[b[i]] = i;
        }
        rep(i, n) cout << mp[a[i]] << " ";
        cout << endl;
    }

    return 0;
}