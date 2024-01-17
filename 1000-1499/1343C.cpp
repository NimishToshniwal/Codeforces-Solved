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
        ll a[n], sum = 0;
        rep(i, n)
        {
            cin >> a[i];
        }
        rep(i, n)
        {
            ll b = a[i];
            int j = i;
            while (j < n && (a[i] * a[j]) > 0)
            {
                b = max(b, a[j]);
                j++;
            }
            sum += b;
            i = j - 1;
        }
        cout << sum << endl;
    }

    return 0;
}