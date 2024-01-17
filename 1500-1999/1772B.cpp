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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int MAX, MIN;
        MAX = max(a, max(b, max(c, d))), MIN = min(a, min(b, min(c, d)));
        if ((a == MAX && d == MIN) || (a == MIN && d == MAX) || (b == MAX && c == MIN) || (b == MIN && c == MAX))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}