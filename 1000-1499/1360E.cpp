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
        int n;
        cin >> n;
        char a[n][n];
        rep(i, n)
        {
            rep(j, n)
            {
                cin >> a[i][j];
            }
        }
        bool flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (a[i][j] == '1')
                {
                    if (a[i + 1][j] == '1')
                    {
                        continue;
                    }
                    else if (a[i][j + 1] == '1')
                    {
                        continue;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}