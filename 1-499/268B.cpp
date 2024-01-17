#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    cout << (n * (n + 1) * (n - 1) / 6) + n;
    return 0;
} // 1*(n-1)+1 + 2*(n-2)+1 + 3*(n-3)+1 + ... + n*(n-n)+1