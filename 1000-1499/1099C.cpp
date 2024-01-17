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
    int n, c = 0, star = 0, q = 0;
    cin >> n;
    int k = s.size();
    rep(i, k)
    {
        if (s[i] <= 'z' && s[i] >= 'a')
        {
            c++;
        }
        else if (s[i] == '*')
            star++;
        else
            q++;
    }
    if (c == n)
    {
        rep(i, k) if (s[i] <= 'z' && s[i] >= 'a') cout << s[i];
    }
    else if (c < n)
    {
        if (star == 0)
            cout << "Impossible";
        else
        {
            int need = n - c;
            for (int i = 0; i < k; i++)
            {
                if (s[i] <= 'z' && s[i] >= 'a')
                    cout << s[i];
                else
                {
                    if (s[i] == '*')
                        while (need > 0)
                        {
                            cout << s[i - 1];
                            need--;
                        }
                }
            }
        }
        // cout << "c = " << c << " n = " << n << endl;
    }
    else
    {
        if (c - n <= q + star)
        {
            int need = c - n;
            vector<char> v;
            for (int i = 0; i < k; i++)
            {
                if (s[i] <= 'z' && s[i] >= 'a')
                {
                    v.push_back(s[i]);
                }
                else
                {
                    if (need > 0)
                    {
                        v.pop_back();
                        need--;
                    }
                }
            }
            rep(i, v.size()) cout << v[i];
        }
        else
        {
            cout << "Impossible";
        }
        // cout << "c = " << c << " n = " << n << " star = " << star << endl;
    }

    return 0;
}