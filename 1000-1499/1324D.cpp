#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
        a[i] -= b[i];
    }
    sort(a.begin(), a.end());
    ll count = 0;
    rep(i, n)
    {
        if (a[i] <= 0)
            continue;
        int l = lower_bound(a.begin(), a.end(), -a[i] + 1) - a.begin();
        // cout<<"l = "<<l<<endl;
        count += i - l;
    }
    cout << count;
    return 0;
}