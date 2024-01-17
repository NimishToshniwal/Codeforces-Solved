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
        int a[n][5], count;
        rep(i, n)
        {
            rep(j, 5) cin >> a[i][j];
        }
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            count = 0;
            rep(j, 5)
            {
                if (a[ans][j] < a[i][j])
                    count++;
            }
            if (count < 3)
                ans = i;
        }
        bool f = 1;
        rep(i, n)
        {
            if (i == ans)
                continue;
            count = 0;
            rep(j, 5)
            {
                if (a[ans][j] < a[i][j])
                    count++;
            }
            if (count < 3)
            {
                f = 0;
                break;
            }
        }
        if (f)
            cout << ans + 1 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}