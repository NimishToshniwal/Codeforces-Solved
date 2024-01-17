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
        string s, t;
        cin >> s >> t;
        bool f = 1;
        int n = s.size(), m = t.size(), p, q, r = 0;
        if (n < m)
        {
            f = 0;
        }
        else
        {
            p = (n - m) % 2;
            q = 0;
            for (int i = p; i < n; i++)
            {
                if (r)
                {
                    r = 0;
                    continue;
                }
                if (q < m && s[i] == t[q])
                {
                    q++;
                }
                else
                {
                    r++;
                }
            }
            // cout<<"q = "<<q<<endl;
            f = (q == m);
        }
        if (f)
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