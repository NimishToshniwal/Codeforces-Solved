#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m, x = 1;
    cin >> n >> m;
    int a[m];
    rep(i, m)
    {
        cin >> a[i];
    }
    ll count = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i] >= x)
        {
            count += a[i] - x;
        }
        else
            count += n - (x - a[i]);

        x = a[i];
    }
    cout << count;
    return 0;
}