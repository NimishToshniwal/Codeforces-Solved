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
        int x, n = s.size();
        cin >> x;
        string w(n, '1');
        rep(i, n)
        {
            if (s[i] == '0')
            {
                if (i - x >= 0)
                    w[i - x] = '0';
                if (i + x < n)
                    w[i + x] = '0';
            }
        }
        bool f1 = 1;
        rep(i, n)
        {
            bool f = (i - x >= 0 && w[i - x] == '1') || (i + x < n && w[i + x] == '1');
            if (s[i] != f + '0')
            {
                f1 = 0;
                break;
            }
        }
        if (f1)
            cout << w << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}