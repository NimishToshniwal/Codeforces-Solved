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
    string s1[n], s2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s1[i] >> s2[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s2[i] == "rat")
        {
            cout << s1[i] << endl;
        }
        continue;
    }
    for (int i = 0; i < n; i++)
    {
        if (s2[i] == "woman" || s2[i] == "child")
        {
            cout << s1[i] << endl;
        }
        continue;
    }
    for (int i = 0; i < n; i++)
    {
        if (s2[i] == "man")
        {
            cout << s1[i] << endl;
        }
        continue;
    }
    for (int i = 0; i < n; i++)
    {
        if (s2[i] == "captain")
        {
            cout << s1[i] << endl;
            break;
        }
        continue;
    }
    return 0;
}