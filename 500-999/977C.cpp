#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (k == 0 && a[0] > 1)
        cout << 1 << endl;
    else if (k == 0 && a[0] == 1)
        cout << -1 << endl;
    else if (k <= n - 1)
    {
        if (a[k] != a[k - 1])
            cout << a[k - 1] << endl;
        else
            cout << -1 << endl;
    }
    else
        cout << a[k - 1] << endl;

    return 0;
}