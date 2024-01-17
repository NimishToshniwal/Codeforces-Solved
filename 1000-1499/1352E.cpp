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
        int n, ans = 0;
        cin >> n;
        int a[n], b[n + 1];
        rep(i, n + 1) b[i] = 0;
        rep(i, n)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        // rep(i, n) cout << a[i] << " ";
        // cout << endl;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += a[j];
                if (i != j && sum <= n)
                {
                    ans += b[sum];
                    b[sum] = 0;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}