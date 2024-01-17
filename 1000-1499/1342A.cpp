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
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        if (2 * a > b)
        {
            cout << (abs(x - y) * a) + (min(x, y) * b) << endl;
        }
        else
        {
            cout << (x + y) * a << endl;
        }
    }
    return 0;
}