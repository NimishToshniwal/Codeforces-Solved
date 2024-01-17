#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, m, k, count = 0;
    cin >> n >> m;
    k = m / n;

    while (m % (n * 2) == 0)
    {
        n *= 2;
        count++;
    }
    while (m % (n * 3) == 0)
    {
        n *= 3;
        count++;
    }
    if (n == m)
    {
        cout << count;
    }
    else
    {
        cout << -1;
    }
    return 0;
}