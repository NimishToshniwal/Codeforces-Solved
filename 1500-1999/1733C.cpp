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
        int n;
        cin >> n;
        int a[n];
        rep(i, n) cin >> a[i];
        cout << n - 1 << endl;
        if (n != 1)
            cout << 1 << " " << n << endl;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] % 2 == a[0] % 2)
                cout << i + 1 << " " << n << endl;
            else
                cout << 1 << " " << i + 1 << endl;
        }
    }

    return 0;
}