#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int a[n], dp[n][3];
    rep(i, n)
    {
        cin >> a[i];
        dp[i][0] = 10000;
        dp[i][1] = 10000;
        dp[i][2] = 10000;
    }
    dp[0][0] = 1;
    if (a[0] == 1 || a[0] == 3)
        dp[0][1] = 0;
    if (a[0] == 2 || a[0] == 3)
        dp[0][2] = 0;
    // rep(i, n){
    //     cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<endl;
    // }
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = 1 + min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2]));
        if (a[i] == 1 || a[i] == 3)
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        if (a[i] == 2 || a[i] == 3)
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
    }
    // rep(i, n){
    //     cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<endl;
    // }
    cout << min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2]));
    return 0;
}