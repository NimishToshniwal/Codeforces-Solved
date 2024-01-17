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
    vector<int> v(26, 0);
    if (s[0] != 'a')
        cout << "NO" << endl;
    else
    {
        bool f = 1;
        v[0]++;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == 'a')
                continue;
            else if (v[s[i] - 'a' - 1] == 0)
            {
                f = 0;
                break;
            }
            else
            {
                v[s[i] - 'a']++;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}