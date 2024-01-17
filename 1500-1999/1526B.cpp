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
        ll x;
        cin >> x;
        if (x >= 1100)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool flag = false;
            for (int i = 0; i < 10; i++)
            {
                if ((x - (111 * i)) % 11 == 0 && (x - (111 * i)) >= 0)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}