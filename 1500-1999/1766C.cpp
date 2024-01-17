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
        char s[2][n];
        rep(i, n) cin >> s[0][i];
        rep(i, n) cin >> s[1][i];
        bool f1 = 1, f2 = 1;
        int c = 0;
        rep(i, n)
        {
            if (s[c][i] == 'W')
            {
                f1 = 0;
                break;
            }
            if (s[1 - c][i] == 'B')
                c = 1 - c;
        }
        c = 1;
        rep(i, n)
        {
            if (s[c][i] == 'W')
            {
                f2 = 0;
                break;
            }
            if (s[1 - c][i] == 'B')
                c = 1 - c;
        }
        if (f1 || f2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}