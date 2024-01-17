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
        string a, b;
        cin >> a >> b;
        ll count = 0, ans = 0;
        if (a[0] != b[0] || a[n - 1] != b[n - 1])
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (a[i] != a[i - 1])
                    count++;
                if (b[i] != b[i - 1])
                    count--;
                ans += abs(count);
            }
            if (count != 0)
                cout << -1 << endl;
            else
                cout << ans << endl;
        }
    }

    return 0;
}