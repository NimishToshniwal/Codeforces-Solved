#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, a = 0, b = 0, k;
        cin >> n >> k;
        while (n--)
        {
            cin >> l >> r;
            if (l == k)
                a = 1;
            if (r == k)
                b = 1;
        }
        cout << (a & b ? "YES" : "NO") << endl;
    }
    return 0;
}