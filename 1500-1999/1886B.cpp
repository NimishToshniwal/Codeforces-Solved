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
        double a, b, p, q, x, y, dis;
        cin >> a >> b >> p >> q >> x >> y;
        dis = max(sqrt(p * p + q * q), sqrt(pow(p - a, 2) + pow(q - b, 2)));
        dis = min(dis, max(sqrt(x * x + y * y), sqrt(pow(x - a, 2) + pow(y - b, 2))));
        dis = min(dis, max(sqrt(pow(p - x, 2) + pow(q - y, 2)) / 2, max(sqrt(x * x + y * y), sqrt(pow(p - a, 2) + pow(q - b, 2)))));
        dis = min(dis, max(sqrt(pow(p - x, 2) + pow(q - y, 2)) / 2, max(sqrt(p * p + q * q), sqrt(pow(x - a, 2) + pow(y - b, 2)))));
        cout << fixed << setprecision(10) << dis << endl;
    }

    return 0;
}