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
        int n, k;
        cin >> n >> k;

        int ans = n;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (n / i <= k)
                {
                    ans = min(ans, i);
                }
                if (i <= k)
                {
                    ans = min(ans, n / i);
                }
            }
            else
            {
                continue;
            }
        }
        cout << ans << endl;
    }

    return 0;
}