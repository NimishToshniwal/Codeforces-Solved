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
        string s = "codeforces";
        map<char, int> mp;
        for (auto it : s)
            mp[it]++;
        char a;
        cin >> a;
        if (mp[a] > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}