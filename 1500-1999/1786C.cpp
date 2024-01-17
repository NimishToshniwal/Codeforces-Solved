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
        int n;
        cin >> n;
        vector<int> v(n);
        rep(i, n) cin >> v[i];
        sort(v.begin(), v.end());
        ll ans = 0;
        ans += v[0] - 1;
        v[0] = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
                continue;
            else
            {
                ans += (v[i] - v[i - 1] - 1);
                v[i] = v[i - 1] + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}