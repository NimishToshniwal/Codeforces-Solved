#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int x, y, z;
    cin >> x >> y >> z;
    cout << 4 * (pow(((x * y) / z), 0.5) + pow(((y * z) / x), 0.5) + pow(((z * x) / y), 0.5));

    return 0;
}