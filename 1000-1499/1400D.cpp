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
        vector<int> a(n), v(n * n, 0);
        rep(i, n)
        {
            cin >> a[i];
            a[i]--;
        }
        ll count = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            for (int l = j + 2; l < n; l++)
            {
                v[a[j + 1] * n + a[l]]++;
            }
            for (int i = 0; i < j; i++)
            {
                count += v[a[i] * n + a[j]];
            }
        }
        cout << count << endl;
    }

    return 0;
}