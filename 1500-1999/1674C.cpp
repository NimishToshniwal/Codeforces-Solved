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
        string a, b;
        cin >> a >> b;
        ll ans = 0;
        int n = a.size(), m = b.size(), count = 0;
        for (int i = 0; i < m; i++)
        {
            if (b[i] == 'a')
                count++;
        }
        if (b == "a")
            ans = 1;
        else if (count != 0)
            ans = -1;
        else
            ans = (1ll << n);
        cout << ans << endl;
    }

    return 0;
}