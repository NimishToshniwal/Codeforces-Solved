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
        ll n, ans = 0, curr = 0;
        cin >> n;
        vector<int> v(n);
        rep(i, n)
        {
            cin >> v[i];
            if (v[i] > curr)
                ans += v[i] - curr;
            curr = v[i];
        }
        cout << ans - 1 << endl;
    }

    return 0;
}