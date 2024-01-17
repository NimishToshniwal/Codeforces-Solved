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
        map<int, int> mp;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<int> v;
        for (auto it : mp)
            v.push_back(it.second);
        sort(v.begin(), v.end());
        int ans = v[0] * v.size();
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] != v[i - 1])
            {
                ans = max(ans, (int(v.size()) - i) * v[i]);
            }
        }
        cout << n - ans << endl;
    }

    return 0;
}