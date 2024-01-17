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
        ll a[n], MIN = INT_MAX;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] < MIN)
                MIN = a[i];
        }
        if (a[0] > MIN)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}