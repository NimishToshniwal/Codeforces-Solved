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
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll ans1, ans2;
        ll diff1, diff2;
        diff1 = min(n, a - x);
        diff2 = min(n - diff1, b - y);
        ans1 = (a - diff1) * (b - diff2);
        swap(a, b);
        swap(x, y);
        diff1 = min(n, a - x);
        diff2 = min(n - diff1, b - y);
        ans2 = (a - diff1) * (b - diff2);
        cout << min(ans1, ans2) << endl;
    }

    return 0;
}