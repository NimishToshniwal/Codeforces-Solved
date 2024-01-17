#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    ll a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);
    int i = 0, j = 0, ans = 0;
    while (j < n && i < n)
    {
        if (a[j] - a[i] > 5)
        {
            i++;
        }
        else
        {
            j++;
            ans = max(ans, j - i);
        }
    }
    ans = max(ans, j - i);
    cout << ans << endl;

    return 0;
}