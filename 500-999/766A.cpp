#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    if (n == m)
    {
        if (a == b)
        {
            cout << -1;
        }
        else
        {
            cout << n;
        }
    }
    else
    {
        cout << max(n, m);
    }

    return 0;
}