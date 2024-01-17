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
    int n = s.size();
    bool f1 = 0, f2 = 0, f11 = 0, f22 = 0;
    for (int i = 1; i < n;)
    {
        if (s[i] == 'A' && s[i - 1] == 'B' && f1 == 0)
        {
            f1 = 1;
            i += 2;
        }
        else if (s[i] == 'B' && s[i - 1] == 'A' && f2 == 0)
        {
            f2 = 1;
            i += 2;
        }
        else
        {
            i++;
        }
    }
    for (int i = n - 2; i >= 0;)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && f11 == 0)
        {
            f11 = 1;
            i -= 2;
        }
        else if (s[i] == 'B' && s[i + 1] == 'A' && f22 == 0)
        {
            f22 = 1;
            i -= 2;
        }
        else
        {
            i--;
        }
    }
    if ((f1 && f2) || (f11 && f22))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}