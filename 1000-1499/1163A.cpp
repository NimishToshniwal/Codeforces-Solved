#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int m1 = m;
    if (m == 0)
    {
        cout << 1;
    }
    else if (m <= n / 2)
    {
        cout << m;
    }
    else
    {
        // if (m == n)
        // {
        //     cout << 0;
        // }
        // else
        // {
        //     m -= n / 2;
        //     n -= m1;
        //     cout << m1 - m;
        // }
        cout<<n-m;
    }

    return 0;
}