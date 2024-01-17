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
        ll n, ans = 1;
        cin >> n;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans = n / i;
                break;
            }
        }
        cout << ans << " " << n - ans << endl;
    }

    return 0;
}