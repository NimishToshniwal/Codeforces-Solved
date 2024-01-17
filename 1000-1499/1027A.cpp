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
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = 1;
        for (int i = 0; i <= n / 2; i++)
        {
            if (abs(s[i] - s[n - i - 1]) == 2 || abs(s[i] - s[n - i - 1]) == 0)
            {
                continue;
            }
            else
            {
                flag = 0;
                cout << "NO" << endl;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}