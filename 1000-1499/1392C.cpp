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
        ll sum = 0;
        ll a[n];
        rep(i, n) cin >> a[i];
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
                sum += (a[i - 1] - a[i]);
        }
        cout << sum << endl;
    }

    return 0;
}