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
        int n = s.size(), count = 0;
        vector<bool> v(26, 0);
        for (auto &it : s)
        {
            if (v[it - 'a'])
            {
                count++;
                for (int i = 0; i < 26; i++)
                {
                    v[i] = 0;
                }
            }
            else
            {
                v[it - 'a'] = 1;
            }
        }
        cout << n - 2 * count << endl;
    }
    return 0;
}