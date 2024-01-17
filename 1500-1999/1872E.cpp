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
        int n, q, x = 0, y = 0, ans = 0;
        cin >> n;
        int a[n + 1], sum[n + 1];
        sum[0] = 0;
        rep1(i, n) cin >> a[i];
        string s;
        cin >> s;
        rep1(i, n)
        {
            if (s[i - 1] == '1')
                ans ^= a[i];
            sum[i] = sum[i - 1] ^ a[i];
        }
        cin >> q;
        while (q--)
        {
            int check;
            cin >> check;
            if (check == 1)
            {
                cin >> x >> y;
                ans ^= (sum[y] ^ sum[x - 1]);
            }
            else
            {
                cin >> x;
                if (x == 1)
                    cout << ans << " ";
                else
                    cout << (ans ^ sum[n]) << " ";
            }
        }
    }

    return 0;
}