#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

ll solve(int i, long long a[])
{
    return max(max(a[i - 1], a[i + 1]) - a[i] + 1, 0ll);
}

int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n + 1];
        rep1(i, n) cin >> a[i];
        if (n % 2 == 1)
        {
            ll count = 0;
            for (int i = 2; i < n; i += 2)
                count += solve(i, a);
            cout << count << endl;
        }
        else
        {
            ll count = 0;
            for (int i = 2; i < n; i += 2)
            {
                count += solve(i, a);
            }
            ll MIN = count;
            for (int i = n - 1; i > 1; i -= 2)
            {
                count -= solve(i - 1, a);
                count += solve(i, a);
                MIN = min(MIN, count);
            }
            cout << MIN << endl;
        }
    }

    return 0;
}