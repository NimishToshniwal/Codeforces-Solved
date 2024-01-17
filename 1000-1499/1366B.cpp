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
        int n, x, m, l, r;
        cin >> n >> x >> m;
        l = x;
        r = x;
        while (m--)
        {
            int l1, r1;
            cin >> l1 >> r1;
            if (l > r1 || r < l1)
                continue;
            l = min(l, l1);
            r = max(r, r1);
        }
        cout << r - l + 1 << endl;
    }

    return 0;
}