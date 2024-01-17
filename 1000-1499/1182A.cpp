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
    int ans = pow(2, n/2);
    if (n % 2 == 0)
    {
        cout << ans;
    }
    else
    {
        cout << 0;
    }
    return 0;
}