#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, ans = 0, j, k;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    rep(i, n)
    {
        for (j = i; (j > 0) && a[j] >= a[j - 1];)
            j--;
        for (k = i; k < (n - 1) && a[k] >= a[k + 1];)
            k++;
        ans = max(ans, k - j + 1);
    }
    cout << ans << endl;

    return 0;
}