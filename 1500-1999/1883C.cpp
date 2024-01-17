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
        if (k == 4)
        {
            int ans = 2, c = 2, x;
            rep(i, n)
            {
                cin >> x;
                if (x % 2 == 0)
                    ans--;
                if (x % 4 == 0)
                    ans--;
                if (x % 4 == 3)
                    c = 1;
            }
            cout << min(max(ans, 0), c) << endl;
        }
        else
        {
            int ans = 100000, x;
            rep(i, n)
            {
                cin >> x;
                ans = min(ans, k - 1 - (x - 1) % k);
            }
            cout << ans << endl;
        }
    }

    return 0;
}