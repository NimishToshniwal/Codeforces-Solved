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
        int n, k, c1 = 0, c0 = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        bool f = 1;
        rep(i, k)
        {
            if (s[i] == '?')
            {
                for (int j = i + k; j < n; j += k)
                {
                    if (s[j] != '?')
                    {
                        s[i] = s[j];
                        break;
                    }
                }
            }
        }
        rep(i, k)
        {
            if (s[i] != '?')
                for (int j = i + k; j < n; j += k)
                {
                    if (s[j] == '?')
                        s[j] = s[i];
                    else if (s[j] != s[i])
                    {
                        f = 0;
                        break;
                    }
                    if (!f)
                        break;
                }
        }
        if (!f)
            cout << "NO" << endl;
        else
        {
            rep(i, k)
            {
                if (s[i] == '1')
                    c1++;
                if (s[i] == '0')
                    c0++;
            }
            if ((c1 <= (k / 2)) && (c0 <= (k / 2)))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}