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
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        int ans = 0;
        int low = n + 1, high = n + 1;
        rep(i, n)
        {
            if (low > high)
                swap(low, high);
            if (a[i] <= low)
                low = a[i];
            else if (a[i] > high)
            {
                ans++;
                low = a[i];
            }
            else
                high = a[i];
        }
        cout << ans << endl;
    }

    return 0;
}