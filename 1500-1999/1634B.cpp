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
        ll n, x, y;
        cin >> n >> x >> y;
        ll a[n], sum = 0;
        rep(i, n)
        {
            cin >> a[i];
            sum += a[i];
        }
        if ((sum + x + y) % 2 == 0)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}