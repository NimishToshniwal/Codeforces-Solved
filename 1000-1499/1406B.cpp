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
        ll a[n], prod = -1e18;
        rep(i, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        prod = max(prod, a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5]);
        prod = max(prod, a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[0]);
        prod = max(prod, a[n - 1] * a[n - 2] * a[n - 3] * a[1] * a[0]);
        prod = max(prod, a[n - 1] * a[n - 2] * a[2] * a[1] * a[0]);
        prod = max(prod, a[n - 1] * a[3] * a[2] * a[1] * a[0]);
        prod = max(prod, a[4] * a[3] * a[2] * a[1] * a[0]);
        cout << prod << endl;
    }

    return 0;
}