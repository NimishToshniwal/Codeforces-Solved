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
        int a[n], diff[n];
        rep(i, n)
        {
            cin >> a[i];
            diff[i] = abs(a[i] - i - 1);
        }
        int ans = __gcd(diff[0], diff[1]);
        for (int i = 2; i < n; i++)
        {
            ans = __gcd(ans, diff[i]);
        }
        cout << ans << endl;
    }

    return 0;
}