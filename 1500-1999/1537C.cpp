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
        ll n;
        cin >> n;
        ll h[n], a, b, MIN, idx = 0;
        rep(i, n) cin >> h[i];
        sort(h, h + n);
        a = h[0];
        b = h[1];
        MIN = b - a;
        rep(i, n - 1)
        {
            if (h[i + 1] - h[i] < MIN)
            {
                MIN = h[i + 1] - h[i];
                a = h[i];
                b = h[i + 1];
                idx = i;
            }
        }
        bool f1 = 0, f2 = 0;
        cout << a << " ";
        // for (int i = 0; i < n; i++)
        // {
        //     if (h[i] == a && f1 == 0)
        //     {
        //         f1 = 1;
        //     }
        //     else if (h[i] == b && f2 == 0)
        //     {
        //         f2 = 1;
        //     }
        //     else
        //     {
        //         cout << h[i] << " ";
        //     }
        // }
        for (int i = idx + 2; i < n; i++)
            cout << h[i] << " ";
        for (int i = 0; i < idx; i++)
            cout << h[i] << " ";
        cout << b << endl;
    }

    return 0;
}