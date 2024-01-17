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
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 1)
        {
            cout << 1 << " " << n / 2 << " " << n / 2 << endl;
        }
        else if (n % 4 == 0)
            cout << n / 2 << " " << n / 4 << " " << n / 4 << endl;
        else
            cout << 2 << " " << (n / 2) - 1 << " " << (n / 2) - 1 << endl;
    }

    return 0;
}