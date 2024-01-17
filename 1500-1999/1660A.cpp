#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

int main()
{
    int t, x, y;
    cin >> t;
    while (t-- && cin >> x >> y)
    {
        cout << (x ? x + 2 * y + 1 : 1) << endl;
    }
    return 0;
}
