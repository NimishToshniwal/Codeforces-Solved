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
        ll hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;
        bool f = 1;
        for (int i = k; i >= 0; i--)
        {
            if ((hm + dc + i * w - 1) / (dc + i * w) <= (hc + dm + (k - i) * a - 1) / dm)
            {
                cout << "YES" << endl;
                f = 0;
                break;
            }
        }
        if (f)
            cout << "NO" << endl;
    }

    return 0;
}