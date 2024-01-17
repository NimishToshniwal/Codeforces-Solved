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
        int MAX = INT_MIN, sum = 0;
        rep(i, n)
        {
            if (i > 0 && (a[i] + a[i - 1]) % 2 == 0)
                sum = 0;
            sum += a[i];
            MAX = max(MAX, sum);
            if (sum < 0)
                sum = 0;
        }
        cout << MAX << endl;
    }

    return 0;
}