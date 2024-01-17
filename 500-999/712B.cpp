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
    int n = s.size(), u = 0, l = 0;
    if (n % 2 == 1)
        cout << -1 << endl;
    else
    {
        rep(i, n)
        {
            if (s[i] == 'U')
                u++;
            else if (s[i] == 'D')
                u--;
            else if (s[i] == 'R')
                l--;
            else
                l++;
        }
        cout << (abs(u) + abs(l)) / 2 << endl;
    }

    return 0;
}