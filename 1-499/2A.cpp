#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> a(n);
    map<string, ll> m1, m2;
    rep(i, n)
    {
        cin >> s[i] >> a[i];
        m1[s[i]] += a[i];
    }
    ll MAX = 0;
    for (auto it : m1)
    {
        MAX = max(MAX, it.second);
    }
    rep(i, n)
    {
        m2[s[i]] += a[i];
        if (m2[s[i]] >= MAX && m1[s[i]] == MAX)
        {
            cout << s[i];
            break;
        }
    }

    return 0;
}