#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    ll a[n], b[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);
    ll sum = 0;
    rep(i, n)
    {
        if (i <= m - 1)
            b[i] = a[i];
        else
        {
            b[i] = b[i - m] + a[i];
        }
        sum += b[i];
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}