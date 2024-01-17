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
        ll n, a, b;
        cin >> n >> a >> b;
        if (b == 1)
            cout << "YES" << endl;
        else if (a == 1)
        {
            if (n % b == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            ll k = 1;
            bool f = 0;
            while (k <= n)
            {
                if (n % b == k % b)
                {
                    f = 1;
                    break;
                }
                k *= a;
            }
            if (f)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}