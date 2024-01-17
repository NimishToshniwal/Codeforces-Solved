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
        if (s[1] - 'a' < s[0] - 'a')
        {
            cout << (s[0] - 'a') * 25 + s[1] - 'a' + 1 << endl;
        }
        else
        {
            cout << (s[0] - 'a') * 25 + s[1] - 'a' << endl;
        }
    }

    return 0;
}