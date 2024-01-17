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
        int n, ans;
        cin >> n;
        int a[n];
        rep(i, n) cin >> a[i];
        cout << 0 << " ";
        for (int i = 1; i < n; i++)
        {
            ans = (a[i] & a[i - 1]) ^ a[i - 1];
            a[i] ^= ans;
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}