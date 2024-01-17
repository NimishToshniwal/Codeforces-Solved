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
        char a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        int maxi = 0;
        rep(i, n)
        {
            if (a[i] == '1')
            {
                if (i + 1 > maxi)
                {
                    maxi = i + 1;
                }
                if (n - i > maxi)
                {
                    maxi = n - i;
                }
            }
        }
        cout << max(2 * maxi, n) << endl;
    }
    return 0;
}