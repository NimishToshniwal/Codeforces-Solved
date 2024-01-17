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
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        int a[n];
        rep(i, n) cin >> a[i];
        if (m < 2)
            cout << 0 << endl;
        else
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if ((abs(a[i] - h) % k == 0) && ((abs(a[i] - h)) <= (m - 1) * k) && (h != a[i]))
                    count++;
            }
            cout << count << endl;
        }
    }

    return 0;
}