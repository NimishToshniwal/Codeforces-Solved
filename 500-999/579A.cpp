#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll x, count = 0;
    cin >> x;
    while (x / 2 != 0)
    {
        if (x % 2 == 1)
        {
            count++;
        }
        x /= 2;
    }
    cout << count + 1;
    return 0;
}