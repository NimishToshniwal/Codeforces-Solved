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
        ll s, i, x, diff;
        cin >> s >> i >> x;
        diff = i - s;
        if (diff >= x)
            cout << 0 << endl;
        else if (diff >= 0)
        {
            x -= (diff + 1);
            s += (diff + 1);
            cout << min((s + x - i + (s + x - i) % 2) / 2, x + 1) << endl;
        }
        else
        {
            cout << min((s + x - i + (s + x - i) % 2) / 2, x + 1) << endl;
        }
    }

    return 0;
}