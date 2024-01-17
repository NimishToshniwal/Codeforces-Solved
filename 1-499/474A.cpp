#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin >> c;
    string s1;
    cin >> s1;
    int loc;
    if (c == 'R')
    {
        for (int i = 0; i < s1.size(); i++)
        {
            loc = s.find(s1[i]);
            s1[i] = s[loc - 1];
            cout << s[loc - 1];
        }
    }
    else
    {
        for (int i = 0; i < s1.size(); i++)
        {
            loc = s.find(s1[i]);
            s1[i] = s[loc + 1];
            cout << s[loc + 1];
        }
    }

    return 0;
}