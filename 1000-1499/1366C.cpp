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
        int n, m, count = 0;
        cin >> n >> m;
        int a[n][m];
        rep(i, n)
        {
            rep(j, m)
            {
                cin >> a[i][j];
            }
        }
        int b[n + m - 1][2];
        memset(b, 0, sizeof(b));
        // rep(i, n+m-1){
        //     rep(j, 2) cout<<b[i][j]<<" ";
        //     cout<<endl;
        // }
        rep(i, n)
        {
            rep(j, m)
            {
                b[i + j][a[i][j]]++;
            }
        }
        // rep(i, n+m-1){
        //     rep(j, 2) cout<<b[i][j]<<" ";
        //     cout<<endl;
        // }
        rep(i, n + m - 1)
        {
            int j = n + m - 2 - i;
            if (i > j)
            {
                count += min(b[i][0] + b[j][0], b[i][1] + b[j][1]);
            }
        }
        cout << count << endl;
    }

    return 0;
}