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
        ll a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        if (((a + b) % 3 == 0) && (2 * a >= b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}