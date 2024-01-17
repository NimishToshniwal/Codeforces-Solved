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
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << "NO";
    }
    else
    {
        bool flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i + 1] != s[i])
            {
                cout << "YES" << endl
                     << s[i] << s[i + 1];
                flag = 1;
                break;
            }
            else
            {
                continue;
            }
        }
        if (flag == 0)
        {
            cout << "NO";
        }
    }
    return 0;
}