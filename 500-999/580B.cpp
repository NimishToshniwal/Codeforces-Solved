#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, d, x, y;
    cin >> n >> d;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    int i = 0, j = 0;
    x = 0, y = 0;
    while (i < n)
    {
        if (v[i].first - v[j].first < d)
        {
            x += v[i].second;
            y = max(x, y);
            i++;
        }
        else
        {
            x -= v[j].second;
            j++;
        }
        // cout<<"i = "<<i<<" j = "<<j<<" x = "<<x<<" y = "<<y<<endl;
    }
    cout << y << endl;

    return 0;
}