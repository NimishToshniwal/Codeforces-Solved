#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, m)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    // cout<<a.begin();
    rep(i, m)
    {
        cout << upper_bound(a.begin(), a.end(), b[i]) - a.begin() << " ";
    }

    return 0;
}
