#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll sum = 0;
        for (int i = 0; i < n - 2 * k; i++)
        {
            sum += a[i];
        }
        int j = n - 1;
        for (int i = n - 2 * k; i < n - k; i++)
        {
            sum += a[i] / a[i + k];
        }
        cout << sum << endl;
    }
    return 0;
}