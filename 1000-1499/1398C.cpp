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
        string s;
        cin >> s;
        vector<int> v(n + 1);
        map<int, ll> mp;
        v[1] = s[0] - '0';
        for (int i = 1; i < n; i++)
        {
            v[i + 1] = s[i] - '0';
        }
        for (int i = 1; i <= n; i++)
        {
            v[i] += v[i - 1];
        }
        for (int i = 0; i <= n; i++)
        {
            mp[v[i] - i]++;
        }
        ll sum = 0;
        for (auto it : mp)
        {
            auto k = it.second;
            sum += (k * (k - 1)) / 2;
            // cout << k << " ";
        }
        // cout << endl;
        cout << sum << endl;
    }
    return 0;
}
