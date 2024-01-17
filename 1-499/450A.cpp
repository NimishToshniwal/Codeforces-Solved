#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m, MAX = -1, idx = 0;
    cin >> n >> m;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
        if ((a[i] + m - 1) / m >= MAX)
        {
            MAX = (a[i] + m - 1) / m;
            idx = i;
        }
    }
    cout << idx + 1;

    return 0;
}