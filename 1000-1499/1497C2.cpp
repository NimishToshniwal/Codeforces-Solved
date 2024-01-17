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

        if ((n - k + 3) % 2 == 1)
        {
            cout << 1 << " " << (n - k + 3) / 2 << " " << (n - k + 3) / 2 << " ";
        }
        else if ((n - k + 3) % 4 == 0)
            cout << (n - k + 3) / 2 << " " << (n - k + 3) / 4 << " " << (n - k + 3) / 4 << " ";
        else
            cout << 2 << " " << ((n - k + 3) / 2) - 1 << " " << ((n - k + 3) / 2) - 1 << " ";
        for (int i = 0; i < k - 3; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }

    return 0;
}