#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, sum = 0, MAX = 0, k;
    cin >> n;
    rep(i, n)
    {
        cin >> k;
        MAX = max(MAX, k);
        sum += k;
    }
    cout << max(MAX, ((sum + n - 2) / (n - 1)));

    return 0;
}