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
        ll c, m, x, diff, sum = 0;
        cin >> c >> m >> x;
        diff = max(c, m) - min(c, m);
        x += diff;
        if (c > m)
            c -= diff;
        else
            m -= diff;
        sum = min(c, min(m, x));
        m -= sum;
        c = m;
        x -= sum;
        sum += (c + m) / 3;
        cout << sum << endl;
    }

    return 0;
}