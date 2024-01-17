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
    int a[n], b[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);
    rep(i, n)
    {
        if (i % 2 == 1)
            b[i] = a[i / 2];
        else
            b[i] = a[n / 2 + i / 2];
    }
    int count = 0;
    rep(i, n - 2)
    {
        if (b[i + 1] < b[i] && b[i + 1] < b[i + 2])
            count++;
    }
    cout << count << endl;
    rep(i, n) cout << b[i] << " ";

    return 0;
}