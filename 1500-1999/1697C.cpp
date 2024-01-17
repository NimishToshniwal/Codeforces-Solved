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
        string s, t;
        cin >> s >> t;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == t[i])
            {
                continue;
            }
            if (s[i] == 'a' && t[i] == 'b')
            {
                int j = i + 1;
                while (j < n && s[j] == 'a')
                {
                    j++;
                }
                if (j < n && s[j] == 'b')
                {
                    s[i] = 'b';
                    s[j] = 'a';
                }
                else
                {
                    break;
                }
            }
            else if (s[i] == 'b' && t[i] == 'c')
            {
                int j = i + 1;
                while (j < n && s[j] == 'b')
                {
                    j++;
                }
                if (j < n && s[j] == 'c')
                {
                    s[i] = 'c';
                    s[j] = 'b';
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        if (s == t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}