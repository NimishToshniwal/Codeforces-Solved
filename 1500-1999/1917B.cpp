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
        ll n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> v(26, 0);
        for (int i = 0; i < n; i++)
        {
            if (!v[s[i] - 'a'])
            {
                v[s[i] - 'a'] = 1;
                ans += n - i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}