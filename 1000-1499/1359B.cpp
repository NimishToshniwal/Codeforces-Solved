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
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        char a[n][m];
        int sum = 0;
        if (y >= 2 * x)
        {
            rep(i, n)
            {
                rep(j, m)
                {
                    cin >> a[i][j];
                    if (a[i][j] == '.')
                    {
                        sum += x;
                    }
                }
            }
            cout << sum << endl;
        }
        else
        {
            rep(i, n)
            {
                rep(j, m)
                {
                    cin >> a[i][j];
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m;)
                {
                    if (j < m - 1 && (a[i][j] == '.' && a[i][j + 1] == '.'))
                    {
                        sum += y;
                        j += 2;
                    }
                    else if (a[i][j] == '.')
                    {
                        sum += x;
                        j++;
                    }
                    else
                    {
                        j++;
                    }
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}