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
        bool f = 1;
        int n;
        cin >> n;
        string s;
        cin >> s;
        rep(i, n - 1)
        {
            if (s[i + 1] == '1')
            {
                if (f)
                {
                    cout << '-';
                }
                else
                    cout << '+';
                f = 1 - f;
            }
            else
            {
                cout << '-';
            }
        }
        cout << endl;
    }

    return 0;
}