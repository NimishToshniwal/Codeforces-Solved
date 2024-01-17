#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

void solve()
{
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    rep(i, n)
    {
        bool f = 1;
        for (int j = 0; j <= i; j++)
        {
            if (a[i] % (j + 2))
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}