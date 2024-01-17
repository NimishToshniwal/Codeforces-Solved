#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    rep(i, m)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    int ans = 0;
    rep(i, n)
    {
        rep(j, m)
        {
            if (abs(a[i] - b[j]) < 2)
            {
                ans++;
                b[j] = INT_MAX;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}