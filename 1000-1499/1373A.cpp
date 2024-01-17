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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a * b > c)
        {
            if (c > a)
            {
                cout << 1 << " ";
            }
            else
                cout << -1 << " ";
        }
        else
        {
            cout << 1 << " ";
        }
        if (a * b <= c)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b << endl;
        }
    }
    return 0;
}