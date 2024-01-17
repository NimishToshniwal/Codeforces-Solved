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
        rep(i, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        bool f = 0;
        ll rsum = a[n - 1], bsum = a[0] + a[1];
        int i = 2, j = n - 2;
        while (i < j)
        {
            if (rsum > bsum)
            {
                f = 1;
                break;
            }
            bsum += a[i];
            rsum += a[j];
            i++;
            j--;
        }
        if (f || (rsum > bsum))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}