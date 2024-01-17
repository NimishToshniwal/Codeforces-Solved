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
    ll a[n];
    vector<ll> v(100001, 0);
    ll MAX = 0;
    rep(i, n)
    {
        cin >> a[i];
        v[a[i]]++;
        MAX = max(MAX, a[i]);
    }
    vector<ll> t;
    t.push_back(0);
    t.push_back(v[1]);
    for (int i = 2; i <= 100001; i++)
    {
        t.push_back(max(t[i - 1], t[i - 2] + (v[i] * i)));
    }
    cout << t[MAX];
    return 0;
}