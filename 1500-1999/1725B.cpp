#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, d, m = 0, count = 0;
    cin >> n >> d;
    ll a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--)
    {
        m += (d / a[i] + 1);
        if (m > n)
            break;
        count++;
    }
    cout << count << endl;
    return 0;
}