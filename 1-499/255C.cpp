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
    int a[n], ptr = 0;
    map<int, int> mp;
    rep(i, n)
    {
        cin >> a[i];
        if (mp.find(a[i]) == mp.end())
            mp[a[i]] = ptr++;
    }
    rep(i, n) a[i] = mp[a[i]];
    int dp[n + 1][n + 1], MAX = 0;
    rep(i, n)
    {
        rep(j, n)
        {
            dp[i][j] = 1;
        }
    }
    // rep(i, n){
    //     rep(j, n){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    rep(i, n)
    {
        rep(j, i)
        {
            dp[i][a[j]] = max(1 + dp[j][a[i]], dp[i][a[j]]);
        }
    }
    rep(i, n)
    {
        rep(j, n)
        {
            MAX = max(MAX, dp[i][j]);
        }
    }
    // rep(i, n) cout<<a[i]<<" ";
    // cout<<endl;

    cout << MAX << endl;
    return 0;
}