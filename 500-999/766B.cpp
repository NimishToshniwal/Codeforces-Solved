#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, f = 0;
    cin >> n;
    ll a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] + a[i] > a[i + 1])
        {
            f = 1;
            break;
        }
    }
    if (f)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}