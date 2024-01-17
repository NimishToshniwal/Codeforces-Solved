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
        int a[n + 1], b[n + 1];
        rep1(i, n)
        {
            cin >> a[i];
        }
        rep1(i, n)
        {
            cin >> b[i];
        }
        sort(a + 1, a + n + 1);
        sort(b + 1, b + n + 1);
        for (int i = 1; i <= n; i++)
        {
            a[i] += a[i - 1];
            b[i] += b[i - 1];
        }
        ll x, y;
        for (int i = 0;; i++)
        {
            x = i * 100 + a[n] - a[(n + i) / 4];
            y = b[n] - b[max((n + i) / 4 - i, 0)];
            if (x < y)
                continue;
            cout << i << endl;
            break;
        }
    }

    return 0;
}