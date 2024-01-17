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
        int n, x;
        cin >> n >> x;
        int a[n], b[n], c[n];
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        rep(i, n) cin >> c[i];
        int curr = 0;
        rep(i, n)
        {
            if ((a[i] | x) != x)
                break;
            curr |= a[i];
        }
        // cout << "curr = " << curr << endl;
        rep(i, n)
        {
            if ((b[i] | x) != x)
                break;
            curr |= b[i];
        }
        // cout << "curr = " << curr << endl;
        rep(i, n)
        {
            if ((c[i] | x) != x)
                break;
            curr |= c[i];
        }
        // cout << "curr = " << curr << endl;
        if (curr == x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}