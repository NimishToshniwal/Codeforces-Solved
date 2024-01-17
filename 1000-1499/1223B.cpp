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
        string a, b;
        int n;
        cin >> a >> b;
        n = a.size();
        vector<int> v(26, 0);
        rep(i, n)
        {
            v[a[i] - 'a']++;
        }
        bool f = 0;
        rep(i, n)
        {
            if (v[b[i] - 'a'] > 0)
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}