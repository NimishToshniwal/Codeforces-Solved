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
        ll n, x, y;
        cin >> n >> x >> y;
        string a, b;
        cin >> a >> b;
        vector<int> v;
        rep(i, n)
        {
            if (a[i] != b[i])
                v.push_back(i);
        }
        if (v.size() % 2 == 1)
            cout << -1 << endl;
        else
        {
            if (v.size() == 2)
            {
                if (v[1] - v[0] == 1)
                {
                    if (n > 2 && 2 * y <= x)
                        cout << 2 * y << endl;
                    else
                        cout << x << endl;
                }
                else
                    cout << y << endl;
            }
            else
            {
                cout << (v.size() * y) / 2 << endl;
            }
        }
    }

    return 0;
}