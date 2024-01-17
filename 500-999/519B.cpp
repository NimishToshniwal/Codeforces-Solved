#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    ll a[n], b[n - 1], c[n - 2], s1 = 0, s2 = 0, s3 = 0;
    rep(i, n)
    {
        cin >> a[i];
        s1 += a[i];
    }
    rep(i, n - 1)
    {
        cin >> b[i];
        s2 += b[i];
    }
    rep(i, n - 2)
    {
        cin >> c[i];
        s3 += c[i];
    }
    cout << s1 - s2 << endl
         << s2 - s3;
    return 0;
}