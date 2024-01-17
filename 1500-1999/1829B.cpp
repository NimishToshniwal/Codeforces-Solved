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
        int n, c = 0, ans = 0;
        cin >> n;
        int a[n];

        rep(i, n)
        {
            cin >> a[i];
            if (a[i] == 0)
                c++;
            else
            {
                ans = max(c, ans);
                c = 0;
            }
        }
        ans = max(c, ans);
        cout << ans << endl;
    }

    return 0;
}