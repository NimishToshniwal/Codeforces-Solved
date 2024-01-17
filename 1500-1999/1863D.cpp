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
        int n, m, f = 1;
        cin >> n >> m;
        char a[n + 1][m + 1];
        rep1(i, n)
        {
            rep1(j, m) cin >> a[i][j];
        }
        rep1(i, n)
        {
            int count = 0;
            rep1(j, m)
            {
                if (a[i][j] == 'U')
                {
                    count++;
                    if (count % 2)
                    {
                        a[i][j] = 'W';
                        a[i + 1][j] = 'B';
                    }
                    else
                    {
                        a[i][j] = 'B';
                        a[i + 1][j] = 'W';
                    }
                }
            }
            if (count % 2)
                f = 0;
        }
        rep1(j, m)
        {
            int count = 0;
            rep1(i, n)
            {
                if (a[i][j] == 'L')
                {
                    count++;
                    if (count % 2)
                    {
                        a[i][j] = 'W';
                        a[i][j + 1] = 'B';
                    }
                    else
                    {
                        a[i][j] = 'B';
                        a[i][j + 1] = 'W';
                    }
                }
            }
            if (count % 2)
                f = 0;
        }
        if (f == 0)
            cout << -1 << endl;
        else
        {
            rep1(i, n)
            {
                rep1(j, m) cout << a[i][j];
                cout << endl;
            }
        }
    }

    return 0;
}