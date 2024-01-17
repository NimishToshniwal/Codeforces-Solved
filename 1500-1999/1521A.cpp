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
        if (b == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl
                 << a << " " << a * b << " " << a * b + a << endl;
    }

    return 0;
}