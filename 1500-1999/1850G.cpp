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
        ll x, y;
        map<ll, ll> hor, ver, dia1, dia2;
        ll count = 0;
        rep(i, n)
        {
            cin >> x >> y;
            hor[y]++;
            ver[x]++;
            dia1[x - y]++;
            dia2[x + y]++;
        }
        for (auto it : hor)
            count += it.second * (it.second - 1);
        for (auto it : ver)
            count += it.second * (it.second - 1);
        for (auto it : dia1)
            count += it.second * (it.second - 1);
        for (auto it : dia2)
            count += it.second * (it.second - 1);
        cout << count << endl;
    }

    return 0;
}