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
        int x;
        cin >> x;
        int ans = 0;
        while (x > 0)
            x -= (++ans);
        if (x == -1)
            ans++;
        cout << ans << endl;
    }

    return 0;
}