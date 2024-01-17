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
        string s;
        cin >> n >> s;
        int x = 0, y = 0, f = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                y++;
            else if (s[i] == 'R')
                x++;
            else if (s[i] == 'L')
                x--;
            else if (s[i] == 'D')
                y--;
            if (x == 1 && y == 1)
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}