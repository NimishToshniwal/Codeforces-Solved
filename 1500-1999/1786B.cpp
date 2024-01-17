#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
#define int int64_t

signed main()

{
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, w, h;
        cin >> n >> w >> h;
        vector<array<int, 2>> a, b;
        rep(i, n)
        {
            int x;
            cin >> x;
            a.push_back({x - w, x + w});
        }
        rep(i, n)
        {
            int x;
            cin >> x;
            b.push_back({x - h, x + h});
        }
        // debug(a, b);

        int l = -1e9, r = 1e9;
        int ans = 0;
        // debug(l, r);
        int check = 0;
        while (l <= r)
        {
            int m = l + ((r - l) / 2);
            int ok = 1;
            for (int i = 0; i < n; i++)
            {
                auto [x, y] = b[i];
                x += m;
                y += m;
                // debug(m,x,y);
                auto [u, v] = a[i];
                if (x >= u and y <= v)
                    continue;
                else
                {
                    ok = 0;
                    if (y > v)
                    {
                        r = m - 1;
                    }
                    else
                    {
                        l = m + 1;
                    }
                    break;
                }
            }
            if (ok)
            {
                cout << "YES" << endl;
                check = 1;
                break;
            }
        }
        if (check == 0)
            cout << "NO" << endl;
    }
    return 0;
}