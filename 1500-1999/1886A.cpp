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
        ll n;
        cin >> n;
        if (n < 7 || n == 9)
            cout << "NO" << endl;
        // else if (n == 11)
        // {
        //     cout << "YES" << endl;
        //     cout << 1 << " " << 2 << " " << 8 << endl;
        // }
        else if (n % 3 != 0)
        {
            cout << "YES" << endl;
            cout << 1 << " " << 2 << " " << n - 3 << endl;
        }
        else if ((n - 5) % 3 != 0)
        {
            cout << "YES" << endl;
            cout << 1 << " " << 4 << " " << n - 5 << endl;
        }
    }

    return 0;
}