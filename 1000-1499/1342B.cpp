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
        bool o = 0, z = 0;
        int n = s.size();
        rep(i, n)
        {
            if (s[i] == '0')
                z = 1;
            else
                o = 1;
        }
        if (o == 0 || z == 0)
        {
            cout << s << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << "01";
            }
            cout << endl;
        }
    }

    return 0;
}