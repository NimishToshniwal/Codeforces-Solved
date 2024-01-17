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
        int n, count = 0;
        cin >> n;
        int a[2 * n];
        set<int> s;
        rep(i, (2 * n))
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        vector<int> v;
        for (int i = 2 * n - 1; i > 0; i--)
        {
            int k = (*s.rbegin());
            count++;
            if (k == a[i])
            {
                v.push_back(count);
                count = 0;
            }
            s.erase(a[i]);
        }

        int dp[v.size() + 1][2 * n + 1];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;
        for (int i = 1; i <= v.size(); i++)
        {
            for (int j = 0; j <= 2 * n; j++)
            {
                if (dp[i - 1][j] == 1)
                {
                    dp[i][j] = 1;
                    dp[i][j + v[i - 1]] = 1;
                }
            }
        }
        if (dp[v.size()][n])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}