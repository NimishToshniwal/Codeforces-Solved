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
        int n, m, k;
        cin >> n >> m >> k;
        int h[n];
        rep(i, n) cin >> h[i];
        bool f = 1;
        rep(i, n - 1)
        {
            m += (h[i] - max(0, h[i + 1] - k));
            if (m < 0)
            {
                f = 0;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}