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
        string s, temp = "";
        cin >> s;
        int n = s.size(), c0 = 0, c1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                temp += '1';
                c0++;
            }
            else
            {
                temp += '0';
                c1++;
            }
        }
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (temp[i] == '0')
            {
                c0--;
                if (c0 < 0)
                    break;
            }
            else
            {
                c1--;
                if (c1 < 0)
                    break;
            }
        }
        cout << n - i << endl;
    }

    return 0;
}