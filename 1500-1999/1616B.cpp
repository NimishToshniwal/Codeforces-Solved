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
        string s;
        cin >> s;
        int i = 0;
        if (s[0] == s[1])
        {
            cout << s[0] << s[1] << endl;
            continue;
        }
        while (i < n - 1 && s[i + 1] <= s[i])
            i++;
        s = s.substr(0, i + 1);
        cout << s;
        reverse(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}