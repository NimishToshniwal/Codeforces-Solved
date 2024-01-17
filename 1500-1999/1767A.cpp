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
        bool f1 = 0, f2 = 0;
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (x1 == x2 || x2 == x3 || x1 == x3)
            f1 = 1;
        if (y1 == y2 || y2 == y3 || y1 == y3)
            f2 = 1;
        if (f1 && f2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}