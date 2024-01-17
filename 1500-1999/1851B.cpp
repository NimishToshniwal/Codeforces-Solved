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
        ll a[n], b[n];
        rep(i, n)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        bool f = 1;
        rep(i, n)
        {
            if ((a[i] % 2 == 1 && b[i] % 2 == 0) || (a[i] % 2 == 0 && b[i] % 2 == 1))
            {
                f = 0;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}