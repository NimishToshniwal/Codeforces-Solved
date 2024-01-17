#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    int d = 7 - max(a, b);
    cout << d / (__gcd(d, 6)) << '/' << 6 / (__gcd(d, 6));
    
    return 0;
}
