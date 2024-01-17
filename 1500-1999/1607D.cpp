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
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        vector<int> b, c;
        rep(i, n)
        {
            if (s[i] == 'B')
            {
                b.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }
        sort(b.begin(), b.end());
        sort(c.begin(), c.end(), greater<int>());
        bool f = 1;
        rep(i, b.size())
        {
            if (b[i] < i + 1)
            {
                f = 0;
                break;
            }
        }
        rep(i, c.size())
        {
            if (c[i] > n - i)
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}