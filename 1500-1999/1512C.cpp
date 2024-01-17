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
        int a, b, k;
        cin >> a >> b;
        k = a + b;
        string s, s1;
        cin >> s;
        for (int i = 0; i < a + b; i++)
        {
            if (s[i] == '?')
                s[i] = s[a + b - i - 1];
        }
        // cout<<"s = "<<s<<endl;
        a -= count(s.begin(), s.end(), '0');
        b -= count(s.begin(), s.end(), '1');
        for (int i = 0; i <= k / 2; i++)
        {
            if ((2 * i != k - 1) && (s[i] == '?'))
            {
                if (a > 1)
                {
                    s[i] = '0';
                    s[k - i - 1] = '0';
                    a -= 2;
                }
                else if (b > 1)
                {
                    s[i] = '1';
                    s[k - i - 1] = '1';
                    b -= 2;
                }
            }
            else if (s[i] == '?')
            {
                if (a)
                {
                    s[i] = '0';
                    a--;
                }
                else if (b)
                {
                    s[i] = '1';
                    b--;
                }
            }
            // cout<<"i = "<<i<<" s = "<<s<<" a = "<<a<<" b = "<<b<<endl;
        }
        s1 = s;
        reverse(s1.begin(), s1.end());
        // cout<<"s = "<<s<<" s1 = "<<s1<<" a = "<<a<<" b = "<<b<<endl;
        if ((s == s1) && (a == 0) && (b == 0))
            cout << s << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}