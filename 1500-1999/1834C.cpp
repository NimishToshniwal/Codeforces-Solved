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
        int n, c1 = 0, c2 = 0;
        string a, b;
        cin >> n >> a >> b;
        rep(i, n)
        {
            c1 += (a[i] != b[i]);
            c2 += (a[i] != b[n - i - 1]);
        }
        if (c1 % 2 == 1)
            c1 = c1 * 2 - 1;
        else
            c1 = c1 * 2;
        if (c2 % 2 == 1)
        {
            c2 *= 2;
        }
        else
        {
            if (c2 > 0)
            {
                c2 = c2 * 2 - 1;
            }
            else
                c2 = 2;
        }
        cout << max(0, min(c1, c2)) << endl;
    }

    return 0;
}