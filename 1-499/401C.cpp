#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m, c1 = 0, c0 = 1;
    cin >> n >> m;
    if (m > 2 * n + 2)
        cout << -1;
    else if (n > m + 1)
        cout << -1;
    else
    {
        while (n > 0 || m > 0)
        {
            if ((m > n && c1 < 2) || c0 == 0)
            {
                m--;
                c0 = 1;
                c1++;
            }
            else
            {
                n--;
                c0 = 0;
                c1 = 0;
            }
            cout << c0;
        }
    }

    return 0;
}