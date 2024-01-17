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
        int a[n], b[n];
        rep(i, n) cin >> a[i] >> b[i];
        if (n % 2 == 1)
            cout << 1 << endl;
        else
        {
            sort(a, a + n);
            sort(b, b + n);
            cout << 1ll * (a[n / 2] - a[(n - 1) / 2] + 1) * (b[n / 2] - b[(n - 1) / 2] + 1) << endl;
        }
    }

    return 0;
}