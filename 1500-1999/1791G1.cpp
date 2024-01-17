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
        ll n, c, count = 0;
        cin >> n >> c;
        vector<ll> v(n), a;
        rep(i, n)
        {
            cin >> v[i];
            a.push_back(i + 1 + v[i]);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= c)
            {
                c -= a[i];
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}