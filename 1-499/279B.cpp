#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, t;
    cin >> n >> t;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    int i, j = -1, sum = 0, ans = 0;
    for (i = 0; i < n; i++)
    {
        if (sum + a[i] <= t)
        {
            sum += a[i];
        }
        else
        {
            sum += a[i];
            while (sum > t)
            {
                j++;
                sum -= a[j];
            }
        }
        ans = max(ans, i - j);
    }
    cout << ans << endl;
    return 0;
}