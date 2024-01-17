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
        ll a[n];
        ll MIN = INT_MAX, mini = 0;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] < MIN)
            {
                MIN = a[i];
                mini = i;
            }
        }
        cout << n - 1 << endl;
        rep(i, n)
        {
            if (i != mini)
            {
                cout << mini + 1 << " " << i + 1 << " " << MIN << " " << MIN + abs(i - mini) << endl;
            }
        }
    }

    return 0;
}