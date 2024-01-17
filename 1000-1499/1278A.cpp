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
        string p, h;
        cin >> p >> h;
        int n = h.size(), m = p.size();
        vector<int> v(26, 0);
        bool f = 0;
        rep(i, m)
        {
            v[p[i] - 'a']++;
        }
        rep(i, n)
        {
            vector<int> a(26, 0);
            for (int j = i; j < n; j++)
            {
                a[h[j] - 'a']++;
                if (a == v)
                {
                    f = 1;
                    break;
                }
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}