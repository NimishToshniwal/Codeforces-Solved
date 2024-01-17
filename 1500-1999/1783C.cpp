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
        int n, m, count = 0;
        cin >> n >> m;
        vector<int> v(n), a(n);
        rep(i, n) cin >> v[i];
        a = v;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (m >= a[i])
            {
                m -= a[i];
                count++;
            }
            else
                break;
        }
        if (count != 0 && count != n && a[count - 1] + m >= v[count])
            cout << n - count << endl;
        else
            cout << n - count + 1 << endl;
    }

    return 0;
}