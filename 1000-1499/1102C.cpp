#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, x, y;
    cin >> n >> x >> y;
    int a[n];
    rep(i, n) cin >> a[i];
    sort(a, a + n);
    if (x > y)
        cout << n << endl;
    else
    {
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= x)
                c++;
            else
                break;
        }
        cout << (c + 1) / 2 << endl;
    }

    return 0;
}