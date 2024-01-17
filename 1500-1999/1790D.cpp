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
        vector<ll> a(n);
        rep(i, n) cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        vector<pair<ll, ll>> v;
        for (int i = 0; i < n;)
        {
            int j = i;
            while ((i < n) && (a[i] == a[j]))
            {
                i++;
            }
            v.push_back({a[j], i - j});
        }
        ll count = v[0].second, m = v.size();
        for (int i = 1; i < m; i++)
        {
            if (((v[i].first) + 1) == v[i - 1].first)
            {
                // cout<<"if"<<endl;
                if (v[i].second > v[i - 1].second)
                {
                    // cout<<"if1"<<endl;
                    count += (v[i].second - v[i - 1].second);
                }
            }
            else
            {
                // cout<<"else"<<endl;
                count += v[i].second;
            }
            // cout<<"i= "<<i<<" count= "<<count<<endl;
        }
        cout << count << endl;
    }

    return 0;
}