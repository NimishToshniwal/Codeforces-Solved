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
        int n, count1 = 0, count2 = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        char a[n][n];
        if (count2 == 1 || count2 == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    if (i == j)
                    {
                        a[i][j] = 'X';
                    }
                    else
                    {
                        if (s[i] == '1')
                        {
                            a[i][j] = '=';
                            a[j][i] = '=';
                        }
                        else
                        {
                            if (s[j] == '2')
                            {
                                a[i][j] = '+';
                                a[j][i] = '-';
                            }
                            else
                            {
                                a[i][j] = '-';
                                a[j][i] = '+';
                            }
                        }
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << a[i][j];
                }
                cout << endl;
            }
        }
    }

    return 0;
}