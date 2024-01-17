#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size();
    ll pref[n], suff[n];
    pref[0] = 0;
    suff[n - 1] = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'v' && s[i - 1] == 'v')
            pref[i] = pref[i - 1] + 1;
        else
            pref[i] = pref[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == 'v' && s[i + 1] == 'v')
            suff[i] = suff[i + 1] + 1;
        else
            suff[i] = suff[i + 1];
    }
    ll ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == 'o')
            ans += (pref[i - 1] * suff[i + 1]);
    }
    cout << ans;
    return 0;
}