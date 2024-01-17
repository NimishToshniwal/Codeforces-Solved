#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll t, s, x;
    cin >> t >> s >> x;
    // x-=t;
    if ((x - t) % s == 0)
    {
        if (x - t < 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
    else if ((x - t - 1) % s == 0 && (x - t - 1) != 0)
    {
        if (x - t - 1 < 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}