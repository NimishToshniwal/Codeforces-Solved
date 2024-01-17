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
        if ((n % 2 == 1) && n < 4)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            if (n % 2 == 0)
            {
                rep(i, n)
                {
                    if (i % 2)
                        cout << 1 << " ";
                    else
                        cout << -1 << " ";
                }
                cout << endl;
            }
            else
            {
                rep(i, n)
                {
                    if (i % 2)
                        cout << (1 - n) / 2 << " ";
                    else
                        cout << (n - 3) / 2 << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}