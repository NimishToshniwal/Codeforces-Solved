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
        int a, b, c, d, k = 0;
        cin >> a >> b >> c >> d;
        if (b > a)
            k++;
        if (c > a)
            k++;
        if (d > a)
            k++;
        cout << k << endl;
    }

    return 0;
}