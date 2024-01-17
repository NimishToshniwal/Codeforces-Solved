#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    set<char> c;
    getline(cin, s);
    rep(i, s.size())
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            c.insert(s[i]);
    }
    cout << c.size();

    return 0;
}