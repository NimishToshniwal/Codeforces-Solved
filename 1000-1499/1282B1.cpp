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
        int n, c, k, count = 0;
        cin >> n >> c >> k;
        int a[n], dp[n + 1];
        rep(i, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        dp[0] = a[0];
        dp[1] = a[1];
        for (int i = 2; i < n; i++)
        {
            dp[i] = a[i] + dp[i - 2];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (dp[i] <= c)
            {
                count = i + 1;
                break;
            }
        }
        
        cout << count << endl;
    }

    return 0;
}