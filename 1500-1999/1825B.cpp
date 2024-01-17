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
        int n, m;
        int b[40010];
        cin >> n >> m;
        rep(i, n * m)
        {
            cin >> b[i];
        }
        sort(b, b + n * m);
        cout << (b[n * m - 1] - b[0]) * (n * m - min(n, m)) + (min(n, m) - 1) * max(b[n * m - 1] - b[1], b[n * m - 2] - b[0]) << endl;
    }
    return 0;
}