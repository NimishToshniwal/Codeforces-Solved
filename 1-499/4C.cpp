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
    string s;
    unordered_map<string, int> mp;
    rep(i, n)
    {
        cin >> s;
        if (mp[s])
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
        else
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }
    }

    return 0;
}