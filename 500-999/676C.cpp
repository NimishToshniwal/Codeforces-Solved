#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int c = 0, ans = 0;
    map<char, int> mp;
    rep(i, n)
    {
        mp[s[i]]++;
        if (min(mp['a'], mp['b']) > k)
        {
            mp[s[c]]--;
            c++;
        }
        ans = max(ans, mp['a'] + mp['b']);
    }
    cout << ans << endl;
    return 0;
}