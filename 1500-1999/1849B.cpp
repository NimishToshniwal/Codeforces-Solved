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
        ll n, k;
        cin >> n >> k;
        vector<pair<int, int>> a;
        rep(i, n)
        {
            int x;
            cin >> x;
            a.push_back({(x % k == 0 ? k : x % k), -i});
        }
        sort(a.begin(), a.end(), greater<pair<int, int>>());
        for (auto it : a)
        {
            cout << -it.second + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}