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
        int n;
        cin >> n;
        int a[n], b[n], s1 = 0, s2 = 0;
        ;
        rep(i, n)
        {
            cin >> a[i];
            s1 += a[i];
        }
        rep(i, n)
        {
            cin >> b[i];
        }
        int MIN = INT_MAX;
        rep(i, n)
        {
            s1 -= a[i];
            MIN = min(MIN, max(s1, s2));
            s2 += b[i];
        }
        cout << MIN << endl;
    }

    return 0;
}