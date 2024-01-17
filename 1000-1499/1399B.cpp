#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int a[55], b[55];
int main()
{

    ios::sync_with_stdio(false);

    int t, n, i, aa, bb;
    long long cnt;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 1; i <= n; i++)
            cin >> a[i];
        for (i = 1; i <= n; i++)
            cin >> b[i];
        aa = bb = 1000000000, cnt = 0;
        for (i = 1; i <= n; i++)
            aa = min(aa, a[i]);
        for (i = 1; i <= n; i++)
            bb = min(bb, b[i]);
        for (i = 1; i <= n; i++)
            cnt += max(a[i] - aa, b[i] - bb);
        cout << cnt << endl;
    }

    return 0;
}