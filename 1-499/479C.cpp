#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int a, b;
    rep(i, n)
    {
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    int ans = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (ans <= v[i].second)
            ans = v[i].second;
        else
            ans = v[i].first;
    }
    cout << ans << endl;

    return 0;
}