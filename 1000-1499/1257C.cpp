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
        int n, f = 0;
        cin >> n;
        int a[n];
        map<int, int> mp;
        rep(i, n)
        {
            cin >> a[i];
            mp[a[i]]++;
            if (mp[a[i]] > 1)
                f = 1;
        }
        if (f == 0)
            cout << -1 << endl;
        else
        {
            map<int, int> m;
            int MIN = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if (m.find(a[i]) != m.end())
                {
                    MIN = min(MIN, i - m[a[i]] + 1);
                    m[a[i]] = i;
                }
                else
                {
                    m[a[i]] = i;
                }
            }
            cout << MIN << endl;
        }
    }
    return 0;
}