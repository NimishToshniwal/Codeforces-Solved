#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, s;
    cin >> n >> s;
    if (s >= 2 * n)
    {
        cout << "YES" << endl;
        rep(i, n - 1) cout << 2 << " ";
        cout << s - 2 * (n - 1) << endl;
        cout << 1 << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}