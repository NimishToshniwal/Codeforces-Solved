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
        int n, MAX, count, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            vector<int> c(10, 0);
            MAX = 0;
            count = 0;
            for (int j = i; j < i + 100 && j < n; j++)
            {
                c[s[j] - '0']++;
                MAX = max(MAX, c[s[j] - '0']);
                if (c[s[j] - '0'] == 1)
                {
                    count++;
                }
                if (count >= MAX)
                    ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}