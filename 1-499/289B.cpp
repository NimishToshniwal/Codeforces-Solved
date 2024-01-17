#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m, d;
    cin >> n >> m >> d;
    int mn = m * n;
    int count = 0, total = 0;
    int a[n][m], b[mn];
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> a[i][j];
            b[count] = a[i][j];
            count++;
        }
    }
    sort(b, b + mn);
    bool f = 1;
    for (int i = 0; i < mn - 1; i++)
    {
        if (b[i + 1] % d != b[i] % d)
            f = 0;
    }
    if (f)
    {
        for (int i = 0; i < mn; i++)
        {
            total += abs(b[mn / 2] - b[i]);
        }
        cout << total / d << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}