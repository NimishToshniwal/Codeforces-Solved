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
    ll a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);
    if (n % 2 == 0)
    {
        for (int i = n - 1; i >= 0; i -= 2)
            cout << a[i] << " ";
        for (int i = 0; i < n; i += 2)
            cout << a[i] << " ";
    }
    else
    {
        for (int i = 0; i < n; i += 2)
            cout << a[i] << " ";
        for (int i = n - 2; i >= 0; i -= 2)
            cout << a[i] << " ";
    }

    return 0;
}