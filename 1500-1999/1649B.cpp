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
        ll a[n], MAX = 0, sum = 0;
        rep(i, n)
        {
            cin >> a[i];
            sum += a[i];
            MAX = max(MAX, a[i]);
        }
        if (sum == 0)
            cout << 0 << endl;
        else if (MAX <= (sum - MAX))
            cout << 1 << endl;
        else
            cout << 2 * MAX - sum << endl;
    }

    return 0;
}