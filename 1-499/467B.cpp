#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int csb(ll n) // count set bits
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main()
{

    ios::sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;
    ll a[m + 1];
    rep(i, m + 1)
    {
        cin >> a[i];
    }
    ll b;
    int c = 0;
    rep(i, m)
    {
        b = a[i] ^ a[m];
        if (csb(b) <= k)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}