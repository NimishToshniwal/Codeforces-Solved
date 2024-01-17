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
        int x, y;
        cin >> x >> y;
        if (y % x == 0)
        {
            cout << 1 << " " << y / x << endl;
        }
        else
        {
            cout << 0 << " " << 0 << endl;
        }
    }

    return 0;
}