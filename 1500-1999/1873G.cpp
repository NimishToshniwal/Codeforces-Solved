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
        bool check = 0;
        int n = s.size();
        if (s[0] == 'B' || s[n - 1] == 'B')
            check = 1;
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B')
            {
                if (s[i] == s[i + 1])
                    check = 1;
            }
        }
        rep(i, n) if (s[i] == 'A') ans++;
        int MIN = 1e6;
        if (!check)
        {
            int curr = 0;
            rep(i, n)
            {
                if (s[i] == 'A')
                    curr++;
                else
                {
                    if (curr != 0)
                    {
                        MIN = min(MIN, curr);
                        curr = 0;
                    }
                }
            }
            MIN = min(MIN, curr);
        }
        if (check)
            cout << ans << endl;
        else
            cout << ans - MIN << endl;
    }

    return 0;
}