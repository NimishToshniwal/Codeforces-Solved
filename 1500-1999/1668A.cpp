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
        int n, m;
        cin >> n >> m;
        if (n == 1 && m > 2)
        {
            cout << -1 << endl;
        }
        else if (m == 1 && n > 2)
        {
            cout << -1 << endl;
        }
        else
        {
            if (m > n)
            {
                swap(n, m);
            }
            if ((n + m) % 2 == 0)
            {
                cout << 2 * n - 2 << endl;
            }
            else
            {
                cout << 2 * n - 3 << endl;
            }
        }
    }

    return 0;
}