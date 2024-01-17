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
        ll x;
        cin >> x;
        // cout << (int(log2(x)) + 1) / 2 << endl;
        ll a = 1, b, c = 2, count = 0;
        while (x > 0)
        {
            b = (a * (a + 1)) / 2;
            x -= b;
            if (x >= 0)
                count++;
            else
                break;
            a += c;
            c *= 2;
        }
        cout << count << endl;
    }

    return 0;
}