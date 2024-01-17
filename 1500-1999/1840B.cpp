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
        ll n, k, count = 0;
        cin >> n >> k;
        ll a = 1;
        if (k >= 30)
            cout << n + 1 << endl;
        else
        {
            while (k > 0)
            {
                a *= 2;
                k--;
            }
            if (a <= n)
                cout << a << endl;
            else
                cout << n + 1 << endl;
        }
    }

    return 0;
}