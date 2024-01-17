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
        for (int i = 0; i < s.size(); i++)
        {
            v[s[i] - 'a']++;
        }
        int c = 0, c1 = 0;
        for (int i = 0; i < 26; i++)
        {
            if (v[i] > 0 && v[i] % 2 == 0)
                c++;
            else if (v[i] > 1 && v[i] % 2 == 1)
            {
                c1++;
            }
        }
        // cout<<"c = "<<c<<" c1 = "<<c1<<endl;
        if (c > 1 || (c >= 1 && c1 == 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}