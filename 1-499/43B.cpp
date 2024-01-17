#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string a, b;
    getline(cin, a);
    getline(cin, b);
    map<char, int> mp;
    bool f = 1;
    for (int i = 0; i < a.size(); i++)
        mp[a[i]]++;
    for (int i = 0; i < b.size(); i++)
    {
        if (mp[b[i]] > 0 || b[i] == ' ')
            mp[b[i]]--;
        else
        {
            f = 0;
            break;
        }
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}