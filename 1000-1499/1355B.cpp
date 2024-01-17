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
        rep(i, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int groups = 0, currsize = 0;
        for (int i = 0; i < n; i++)
        {
            if (++currsize == a[i])
            {
                groups++;
                currsize = 0;
            }
        }
        cout << groups << endl;
    }

    return 0;
}