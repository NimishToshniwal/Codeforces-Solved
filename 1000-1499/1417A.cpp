#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    long long a[1001];
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long s = a[0];
        long long rest = 0, ans = 0;
        for (int i = 1; i < n; i++)
        {
            rest = k - a[i];
            ans += (rest / s);
        }
        cout << ans << endl;
    }

    return 0;
}