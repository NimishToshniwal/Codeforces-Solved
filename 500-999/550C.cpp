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
    int n = s.size(), j, ans;
    for (int i = 0; i < n; i++)
    {
        j = s[i] - '0';
        if (j == 0 || j == 8)
        {
            cout << "YES " << j;
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans = (s[i] - '0') * 10 + (s[j] - '0');
            if (ans % 8 == 0)
            {
                cout << "YES " << ans;
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                ans = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (ans % 8 == 0)
                {
                    cout << "YES " << ans;
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}