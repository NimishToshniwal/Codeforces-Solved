#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, k, sum;
    cin >> n >> k;
    ll s = 1, e = n, m;
    while (e - s > 1)
    {
        sum = 0;
        m = (s + (e - s) / 2);
        ll m1 = m;
        while (m1 > 0)
        {
            sum += m1;
            m1 /= k;
        }
        if (sum >= n)
            e = m;
        else if (sum < n)
            s = m;
    }
    cout << e << endl;

    return 0;
}