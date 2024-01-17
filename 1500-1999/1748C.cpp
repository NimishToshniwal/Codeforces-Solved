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
        ll n, l, r, sum, MAX, count = 0;
        cin >> n;
        ll a[n];
        vector<ll> v;
        rep(i, n)
        {
            cin >> a[i];
            if (!a[i])
                v.push_back(i);
        }
        rep(i, v.size())
        {
            l = v[i], r, sum = 0, MAX = 0;
            if (i == v.size() - 1)
                r = n - 1;
            else
                r = v[i + 1] - 1;
            map<ll, ll> mp;
            for (int j = l; j <= r; j++)
            {
                sum += a[j];
                mp[sum]++;
                MAX = max(MAX, mp[sum]);
            }
            count += MAX;
        }
        if (v.empty())
            l = n;
        else
            l = v[0];
        sum = 0;
        for (int i = 0; i < l; i++)
        {
            sum += a[i];
            if (!sum)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}