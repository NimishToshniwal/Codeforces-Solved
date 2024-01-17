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
    vector<ll> a(n), b(n), v(1);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    // v.push_back(a[0]*b[0]);
    for (int i = 0; i < n; i++)
    {
        v.push_back(v.back() + (a[i] * b[i]));
    }
    ll MAX = v.back();
    rep(i, n)
    {
        ll sum = a[i] * b[i];
        for (int r = i + 1, l = i - 1; l >= 0 && r < n; l--, r++)
        {
            sum += a[r] * b[l];
            sum += a[l] * b[r];
            MAX = max(MAX, sum + v[n] - v[r + 1] + v[l]);
        }
        sum = 0;
        for (int r = i + 1, l = i; l >= 0 && r < n; l--, r++)
        {
            sum += a[r] * b[l];
            sum += a[l] * b[r];
            MAX = max(MAX, sum + v[n] - v[r + 1] + v[l]);
        }
    }
    cout << MAX << endl;
    return 0;
}