#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, ans = 1;
    cin >> n;
    string s;
    map<string, int> mp;
    rep(i, n)
    {
        cin >> s;
        if (mp[s]++)
            ;
        ans = max(ans, mp[s]);
    }
    cout << ans << endl;
    return 0;
}