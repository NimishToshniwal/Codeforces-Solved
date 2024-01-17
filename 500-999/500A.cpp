#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, t;
    cin >> n >> t;
    int a[n - 1], c = 0;
    rep(i, n - 1)
    {
        cin >> a[i];
    }
    while (c < t - 1)
    {
        c += a[c];
    }
    if (c == t - 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}