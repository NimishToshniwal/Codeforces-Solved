#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
bool comparator(pair<int, int> &p, pair<int, int> &p1)
{
    return p.second < p1.second;
}
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    map<int, vector<pair<int, int>>> mp;
    rep(i, n)
    {
        rep(j, m)
        {
            int k;
            cin >> k;
            mp[k].push_back({i, j});
        }
    }
    ll a = 0;
    for (auto it : mp)
    {
        vector<pair<int, int>> v1 = it.second;
        sort(v1.begin(), v1.end());
        ll sum = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            sum += v1[i].first;
        }
        for (int i = 0; i < v1.size(); i++)
        {
            sum -= v1[i].first;
            a += (sum - ((v1.size() - 1 - i) * v1[i].first));
        }
        sort(v1.begin(), v1.end(), comparator);
        sum = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            sum += v1[i].second;
        }
        for (int i = 0; i < v1.size(); i++)
        {
            sum -= v1[i].second;
            a += (sum - ((v1.size() - 1 - i) * v1[i].second));
        }
    }
    cout << a;
    return 0;
}