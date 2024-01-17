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
        for (int i = 0; i < 9; i++)
        {
            cin >> s;
            for (int i = 0; i < 9; i++)
            {
                if (s[i] == '1')
                    s[i] = '9';
            }
            cout << s << endl;
        }
    }

    return 0;
}