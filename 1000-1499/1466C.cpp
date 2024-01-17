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
        int n;
        n = s.size();
        if (n == 1)
            cout << 0 << endl;
        else if (n == 2)
        {
            if (s[0] == s[1])
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
        {
            int count = 0;
            for (int i = 1; i < n; i++)
            {
                if (s[i] == s[i - 1] || (i > 1) && s[i] == s[i - 2])
                {
                    s[i] = '!';
                }
            }
            rep(i, n)
            {
                if (s[i] == '!')
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}