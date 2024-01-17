#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int i = 0, res = 0;
    while (i < n)
        if (s[i] != t[i])
        {
            if (i + 1 < n && s[i + 1] != t[i + 1] && s[i] != s[i + 1])
            {
                res++;
                i += 2;
            }
            else
            {
                res++;
                i++;
            }
        }
        else
        {
            i++;
        }
    cout << res;
    return 0;
}