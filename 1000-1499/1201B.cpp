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
    ll a[n], sum = 0, MAX = INT_MIN;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
        MAX = max(MAX, a[i]);
    }
    if (sum % 2 != 0 || MAX * 2 > sum)
    {
        cout << "NO";
    }
    else
        cout << "YES";
    return 0;
}