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
        map<int, int> m1, m2;
        int count = 1;
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                count++;
            else
            {
                m1[a[i - 1]] = max(m1[a[i - 1]], count);
                count = 1;
            }
        }
        m1[a[n - 1]] = max(m1[a[n - 1]], count);
        count = 1;
        for (int i = 1; i < n; i++)
        {
            if (b[i] == b[i - 1])
                count++;
            else
            {
                m2[b[i - 1]] = max(m2[b[i - 1]], count);
                count = 1;
            }
        }
        m2[b[n - 1]] = max(m2[b[n - 1]], count);
        int ans = 0;
        rep1(i, 2 * n)
        {
            ans = max(ans, m1[i] + m2[i]);
        }
        cout << ans << endl;
    }

    return 0;
}