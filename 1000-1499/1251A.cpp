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
        string s;
        cin >> s;
        vector<int> v(26, 0);
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            int j = i;
            while (j < s.size() - 1 && s[i] == s[j + 1])
                j++;
            if ((j - i) % 2 == 0)
            {
                v[s[i] - 'a'] = 1;
            }
            i = j;
        }
        rep(i, 26)
        {
            if (v[i] == 1)
                cout << (char)('a' + i);
        }
        cout << endl;
    }

    return 0;
}