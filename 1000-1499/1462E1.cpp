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
        sort(a, a + n);
        ll sum = 0;
        ll j = 1;
        for (ll i = 0; i < n; i++)
        {
            while (a[j] - a[i] <= 2 && j < n)
                j++;
            j--;
            if (j - i >= 2)
                sum += (j - i) * (j - i - 1) / 2;
        }
        cout << sum << endl;
    }

    return 0;
}