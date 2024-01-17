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
        int n, i1 = 0, i2 = 0, in = 0;
        cin >> n;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] == 1)
                i1 = i + 1;
            if (a[i] == 2)
                i2 = i + 1;
            if (a[i] == n)
                in = i + 1;
        }
        if (in < min(i1, i2))
            cout << in << " " << min(i1, i2) << endl;
        else if (in > max(i1, i2))
            cout << in << " " << max(i1, i2) << endl;
        else
            cout << i1 << " " << i2 << endl;
    }

    return 0;
}