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
        int a[n], b[n];
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        bool f = 1;
        rep(i, n) f = f & (a[i] <= b[i] && (b[i] - b[(i + 1) % n] <= 1 || a[i] == b[i]));
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}