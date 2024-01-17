#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    char x[50][50];
    int n, m, p = 0;
    cin >> n >> m;
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> x[i][j];
        }
    }
    rep(i, n)
    {
        rep(j, m) if (x[i][j] != '1' && ((x[i][j] == x[i][j + 1]) + (x[i][j] == x[i - 1][j]) + (x[i][j] == x[i][j - 1]) + (x[i][j] == x[i + 1][j])) < 2)
        {
            x[i][j] = '1';
            i = 0;
            j = 0;
            // rep(ii, n)
            // {
            //     rep(jj, m)
            //     {
            //         cout << x[ii][jj] << " ";
            //     }
            //     cout << endl;
            // }
        }
    }
    rep(i, n)
        rep(j, m) if (x[i][j] != '1')
            p++;

    if (p > 1)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}