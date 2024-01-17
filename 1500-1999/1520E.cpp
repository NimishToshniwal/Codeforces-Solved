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
        vector<int> v;
        int n;
        string s;
        cin >> n >> s;
        rep(i, n) if (s[i] == '*') v.push_back(i);
        ll ans = 0, median = v.size() / 2;
        rep(i, v.size())
        {
            ans += (abs(v[median] - v[i] - median + i));
        }
        cout << ans << endl;
    }

    return 0;
}