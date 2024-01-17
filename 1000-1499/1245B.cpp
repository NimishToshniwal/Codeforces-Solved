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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int R, P, S;
        string s;
        cin >> s;
        vector<int> v(26, 0);
        for (int i = 0; i < n; i++)
        {
            v[s[i] - 'A']++;
        }
        if (2 * (min(a, v['S' - 'A']) + min(b, v['R' - 'A']) + min(c, v['P' - 'A'])) < n)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        string s1 = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'S' && a)
            {
                s1 += 'R';
                a--;
            }
            else if (s[i] == 'R' && b)
            {
                s1 += 'P';
                b--;
            }
            else if (s[i] == 'P' && c)
            {
                s1 += 'S';
                c--;
            }
            else
                s1 += '!';
        }
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '!')
            {
                if (a)
                {
                    s1[i] = 'R';
                    a--;
                }
                else if (b)
                {
                    s1[i] = 'P';
                    b--;
                }
                else
                {
                    s1[i] = 'S';
                    c--;
                }
            }
        }
        cout << s1 << endl;
    }

    return 0;
}