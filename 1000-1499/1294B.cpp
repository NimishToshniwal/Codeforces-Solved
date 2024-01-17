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
        int n, f = 1;
        string s = "";
        cin >> n;
        vector<pair<int, int>> v(n);
        rep(i, n) cin >> v[i].first >> v[i].second;
        sort(v.begin(), v.end());
        int x = 0, y = 0;
        rep(i, n)
        {
            int right = v[i].first - x;
            int up = v[i].second - y;
            if (right < 0 || up < 0)
            {
                f = 0;
                break;
            }
            s += string(right, 'R');
            s += string(up, 'U');
            x = v[i].first;
            y = v[i].second;
        }
        if (f)
            cout << "YES" << endl
                 << s << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}