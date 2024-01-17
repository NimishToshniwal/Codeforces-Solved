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
        int n;
        cin >> n;
        ll a[n], l = 0, r = 0;
        rep(i, n)
        {
            cin >> a[i];
        }
        bool flag = 1;
        rep(i, n)
        {
            l += a[i];
            r += a[n - i - 1];
            if (l <= 0 || r <= 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}