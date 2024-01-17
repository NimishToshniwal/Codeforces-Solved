#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> v[i][j];
            if (v[i][j] == '.')
            {
                if ((i + j) % 2 == 1)
                    v[i][j] = 'W';
                else
                    v[i][j] = 'B';
            }
        }
    }
    rep(i, n)
    {
        rep(j, m) cout << v[i][j];
        cout << endl;
    }

    return 0;
}