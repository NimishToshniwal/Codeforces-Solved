#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m, ans;
    cin >> n >> m;
    // if (n % 2 == 0)
    // {
    ans = (((n+1)/2)+m-1)/m*m;
    // }
    // else
    // {
    //     n -= 1;
    //     ans = (n / 2) + m - ((n / 2) % m);
    //     ans += 1;
    // }
    if (ans > n)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }
    return 0;
}