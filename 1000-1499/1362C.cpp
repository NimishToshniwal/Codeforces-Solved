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
        ll n, ans = 0, count = 0;
        cin >> n;
        ans = 2 * n;
        while (n > 0)
        {
            if (n & 1)
                count++;
            n >>= 1;
        }
        cout << ans - count << endl;
    }

    return 0;
}