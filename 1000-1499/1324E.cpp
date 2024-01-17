#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int dp[2002][2002][2];
int main()
{

    ios::sync_with_stdio(false);

    // int n, h, l, r;
    // cin>>n>>h>>l>>r;

    int n, h, l, r;
    cin >> n >> h >> l >> r;
    // cout<<n<<" "<<h<<" "<<l<<" "<<r;
    vector<int> v(n);
    rep(i, n) cin >> v[i];
    int count = 0;
    rep(i, 2002)
    {
        rep(j, 2002)
        {
            dp[i][j][0] = INT_MIN;
            dp[i][j][1] = INT_MIN;
        }
    }
    if ((l <= v[0]) && (r >= v[0]))
        dp[0][v[0]][0] = 1;
    else
        dp[0][v[0]][0] = 0;
    if ((l <= (v[0] - 1)) && (r >= (v[0] - 1)))
        dp[0][v[0] - 1][1] = 1;
    else
        dp[0][v[0] - 1][1] = 0;
    count = max(dp[0][v[0]][0], dp[0][v[0] - 1][1]);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < h; j++)
        {
            dp[i][j][0] = max(dp[i][j][0], int(l <= j && r >= j) + dp[i - 1][((((j - v[i] - h) % h) + h) % h)][0]);
            dp[i][j][0] = max(dp[i][j][0], int(l <= j && r >= j) + dp[i - 1][((((j - v[i] - h) % h) + h) % h)][1]);
            dp[i][j][1] = max(dp[i][j][1], int(l <= j && r >= j) + dp[i - 1][((((j - v[i] + 1 - h) % h) + h) % h)][0]);
            dp[i][j][1] = max(dp[i][j][1], int(l <= j && r >= j) + dp[i - 1][((((j - v[i] + 1 - h) % h) + h) % h)][1]);
            count = max(count, max(dp[i][j][0], dp[i][j][1]));
        }
    }
    // rep(i, n){
    //     rep(j, h) cout<<dp[i][j][0]<<" ";
    //     cout<<endl;
    // }
    // rep(i, n){
    //     rep(j, h) cout<<dp[i][j][1]<<" ";
    //     cout<<endl;
    // }
    cout << count << endl;
    return 0;
}