#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
const int MOD = 1e9 + 7;
int main()
{

    ios::sync_with_stdio(false);

    int t, k, n = 1e5;
    vector<int> dp(n + 1), pref(n + 1);
    cin >> t >> k;
    for (int i = 1; i < k; i++)
        dp[i] = 1;
    dp[k] = 2;
    for (int i = k + 1; i <= n; i++)
        dp[i] = (dp[i - 1] + dp[i - k]) % MOD;
    for (int i = 1; i <= n; i++)
        pref[i] = (pref[i - 1] + dp[i]) % MOD;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = (pref[b] - pref[a - 1]) % MOD;
        if (count < 0)
            count += MOD;
        cout << count << endl;
    }
    return 0;
}