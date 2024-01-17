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
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<string, int> mp;
        bool f = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (mp.find(s.substr(i, 2)) != mp.end())
            {
                if (mp[s.substr(i, 2)] != i - 1)
                {
                    f = 1;
                    break;
                }
            }
            else
                mp[s.substr(i, 2)] = i;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}