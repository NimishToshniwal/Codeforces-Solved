#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    ll a[n], b[n], sum = 0;
    rep(i, n) cin >> a[i];
    rep(i, n)
    {
        cin >> b[i];
        sum += b[i];
        b[i] = a[i] - b[i];
    }
    sort(b, b + n);
    int i = 0;
    while (k-- > 0 || b[i] < 0)
    {
        sum += b[i++];
    }
    cout << sum << endl;

    return 0;
}