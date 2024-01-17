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
        int n, x, k, sum = 0;
        cin >> n >> x;
        int l = -500, r;
        rep(i, n)
        {
            cin >> k;
            if (k % x != 0)
            {
                if (l == -500)
                {
                    l = i;
                }
                r = i;
            }
            sum += k;
        }
        if (sum % x != 0)
        {
            cout << n << endl;
        }
        else if (l == -500)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n - min((l + 1), n - r) << endl;
        }
    }

    return 0;
}