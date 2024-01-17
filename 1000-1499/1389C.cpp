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
        string s;
        cin >> s;
        int n = s.size();
        vector<int> v(10, 0);
        rep(i, n)
        {
            v[s[i] - '0']++;
        }
        int MAX = 0;
        rep(i, 10)
        {
            MAX = max(MAX, v[i]);
        }
        int ans = n - MAX;
        rep(i, 10)
        {
            rep(j, 10)
            {
                bool f = 1;
                int count = 0;
                rep(k, n)
                {
                    if (f && (s[k] == i + '0'))
                    {
                        f = 0;
                        count++;
                    }
                    else if (!f && (s[k] == j + '0'))
                    {
                        f = 1;
                        count++;
                    }
                }
                if (count % 2 == 1)
                {
                    count--;
                }
                ans = min(ans, n - count);
            }
        }
        cout << ans << endl;
    }
    return 0;
}