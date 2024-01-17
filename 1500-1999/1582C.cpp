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
        int ans = n + 1;
        for (int i = 0; i < 26; i++)
        {
            int l = 0, r = n - 1, c = 0;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[l] == char('a' + i))
                {
                    c++;
                    l++;
                }
                else if (s[r] == char('a' + i))
                {
                    c++;
                    r--;
                }
                else
                {
                    c = n + 1;
                    break;
                }
            }
            ans = min(ans, c);
        }
        if (ans == n + 1)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}