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
        int n, x, ans = 0;
        cin >> n;
        vector<pair<int, int>> a, b, c;
        rep(i, n)
        {
            cin >> x;
            a.push_back({x, i});
        }
        rep(i, n)
        {
            cin >> x;
            b.push_back({x, i});
        }
        rep(i, n)
        {
            cin >> x;
            c.push_back({x, i});
        }
        sort(a.begin(), a.end(), greater<pair<int, int>>());
        sort(b.begin(), b.end(), greater<pair<int, int>>());
        sort(c.begin(), c.end(), greater<pair<int, int>>());
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second)
                    {
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}