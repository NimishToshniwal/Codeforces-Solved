#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, count = 0;
    ll x;
    cin >> n >> x;
    rep1(i, n)
    {
        if ((x % i == 0) && ((x / i) <= n))
        {
            count++;
        }
        continue;
    }
    cout << count;
    return 0;
}