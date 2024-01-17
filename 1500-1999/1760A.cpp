#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);
    int t, a[3];
    cin >> t;
    while (t--)
    {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        cout << a[1] << '\n';
    }
    return 0;
}