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
        int n, MIN = INT_MAX;
        bool f = 1;
        cin >> n;
        vector<int> v(n), a(n);
        rep(i, n)
        {
            cin >> v[i];
            a[i] = v[i];
            MIN = min(MIN, v[i]);
        }
        sort(a.begin(), a.end());
        rep(i, n)
        {
            if ((v[i] != a[i]) && (v[i] % MIN != 0))
            {
                f = 0;
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