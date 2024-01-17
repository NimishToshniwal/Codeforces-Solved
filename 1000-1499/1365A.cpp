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
        int n, m, x, f, r = 0, c = 0;
        cin >> n >> m;
        int a[n][m];
        rep(i, n)
        {
            f = 0;
            rep(j, m)
            {
                cin >> x;
                a[i][j] = x;
                if (x)
                    f = 1;
            }
            if (f)
                r++;
        }
        rep(j, m)
        {
            f = 0;
            rep(i, n)
            {
                if (a[i][j])
                    f = 1;
            }
            if (f)
                c++;
        }
        if (min(n - r, m - c) % 2 == 0)
            cout << "Vivek" << endl;
        else
            cout << "Ashish" << endl;
    }

    return 0;
}