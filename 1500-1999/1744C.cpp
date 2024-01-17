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
        int n, last = 0, ans = 0;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s = s + s;
        for (int i = 2 * n - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
                last = i;
            if (s[i] == c)
                ans = max(ans, last - i);
        }
        cout << ans << endl;
    }
    return 0;
}