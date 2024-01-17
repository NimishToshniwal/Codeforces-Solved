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
    if ((n + m) / 3 <= min(n, m))
        cout << (n + m) / 3;
    else
        cout << min(n, m);

    return 0;
}