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
        int n, f = 1;
        cin >> n;
        vector<int> a(n), b;
        map<int, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            b.push_back(a[i]);
            while (mp[a[i]] && a[i] <= 2 * n)
                a[i]++;
            if (a[i] > 2 * n)
            {
                f = 0;
                break;
            }
            mp[a[i]] = 1;
            b.push_back(a[i]);
            if (f == 0)
                break;
        }
        if (f)
        {
            for (auto it : b)
                cout << it << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}