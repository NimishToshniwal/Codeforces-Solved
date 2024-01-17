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
        vector<char> a(n, '0'), b(n, '0');
        rep(i, n)
        {
            if (s[i] == '1')
            {
                a[i] = '0';
                b[i] = '1';
                for (int j = i + 1; j < n; j++)
                {
                    a[j] = s[j];
                }
                break;
            }
            else
            {
                a[i] = '0' + (s[i] - '0') / 2;
                b[i] = a[i];
            }
        }
        rep(i, n)
        {
            cout << a[i];
        }
        cout << endl;
        rep(i, n)
        {
            cout << b[i];
        }
        cout << endl;
    }

    return 0;
}