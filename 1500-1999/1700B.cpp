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
        string s, s1;
        cin >> s;
        if (s[0] == '9')
        {
            int a = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                int b = s[i] - '0';
                b += a;
                if (b > 1)
                {
                    int c = 11 - b;
                    a = 1;
                    s1 += (c + '0');
                }
                else
                {
                    a = 0;
                    int c = 1 - b;
                    s1 += c + '0';
                }
            }
            reverse(s1.begin(), s1.end());
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                int a = s[i] - '0';
                int b = 9 - a;
                s1 += b + '0';
            }
        }
        cout << s1 << endl;
    }

    return 0;
}