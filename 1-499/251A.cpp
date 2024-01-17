#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    rep(i, n) cin >> v[i];
    ll count = 0;
    rep(i, n - 2)
    {
        ll avail = lower_bound(v.begin(), v.end(), v[i] + d) - v.begin();
        if (v[i] != v[avail] - d)
            avail--;
        avail -= i;
        if (avail >= 0)
            count += ((avail * (avail - 1)) / 2);
    }
    cout << count << endl;
    return 0;
}