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
    ll sum = 0;
    int a[502][502];
    rep1(i, n)
    {
        rep1(j, m)
        {
            cin >> a[i][j];
        }
    }
    sum = 1;
    for (int i = n; i >= 1; i--)
    {
        for (int j = m; j >= 1; j--)
        {
            if (a[i][j] == 0)
                a[i][j] = min(a[i + 1][j], a[i][j + 1]) - 1;
            if (a[i][j] <= max(a[i - 1][j], a[i][j - 1]))
            {
                sum = 0;
                break;
            }
        }
    }
    if (sum == 0)
        cout << -1 << endl;
    else
    {
        sum = 0;
        rep1(i, n)
        {
            rep1(j, m)
            {
                sum += a[i][j];
            }
        }
        cout << sum << endl;
    }

    return 0;
}