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
        ll n, k;
        cin >> n >> k;
        int rem1 = n - k + 1;
        if (rem1 > 0 && rem1 % 2 == 1)
        {
            cout << "YES" << endl;
            rep(i, k - 1) cout << 1 << " ";
            cout << rem1 << endl;
            continue;
        }
        int rem2 = n - 2 * k + 2;
        if (rem2 > 0 && rem2 % 2 == 0)
        {
            cout << "YES" << endl;
            rep(i, k - 1) cout << 2 << " ";
            cout << rem2 << endl;
            continue;
        }
        cout << "NO" << endl;
    }

    return 0;
}