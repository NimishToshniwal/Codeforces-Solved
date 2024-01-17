#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    s += '%';
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            for (auto it : {'R', 'G', 'B'})
            {
                s[i] = it;
                if (s[i] != s[i + 1] && s[i - 1] != s[i])
                    break;
            }
        }
    }
    s.pop_back();
    cout << count << endl
         << s;

    return 0;
}