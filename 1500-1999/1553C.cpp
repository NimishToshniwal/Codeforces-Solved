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
        ll MIN = 9;
        int c0 = 0, c1 = 0;
        rep(i, 10)
        {
            if (i % 2 == 0)
                c0 += s[i] != '0';
            else
                c1 += s[i] == '1';
            if (c0 > c1 + (10 - i) / 2)
                MIN = min(MIN, i);
            if (c1 > c0 + (9 - i) / 2)
                MIN = min(MIN, i);
        }
        c0 = 0, c1 = 0;
        rep(i, 10)
        {
            if (i % 2 == 1)
                c1 += s[i] != '0';
            else
                c0 += s[i] == '1';
            if (c0 > c1 + (10 - i) / 2)
                MIN = min(MIN, i);
            if (c1 > c0 + (9 - i) / 2)
                MIN = min(MIN, i);
        }
        cout << MIN + 1 << endl;
    }

    return 0;
}