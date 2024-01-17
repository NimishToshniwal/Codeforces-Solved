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
        int n, m, h, ans = 0;
        cin >> n >> m >> h;
        ll sum[n + 1], count[n + 1], a[m + 1];
        rep1(i, n)
        {
            rep1(j, m) cin >> a[j];
            sort(a + 1, a + m + 1);
            count[i] = 0, sum[i] = 0;
            int time = 0;
            rep1(j, m)
            {
                if (time + a[j] <= h)
                {
                    count[i]++;
                    time += a[j];
                    sum[i] += time;
                }
                else
                    break;
            }
            if (count[i] > count[1] || (count[i] == count[1] && sum[i] < sum[1]))
                ans++;
        }
        cout << ans + 1 << endl;
    }

    return 0;
}