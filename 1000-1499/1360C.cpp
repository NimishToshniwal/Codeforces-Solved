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
        int n, c0 = 0, c1 = 0;
        cin >> n;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
                c1++;
            else
                c0++;
        }
        if (c0 % 2 == 1)
        {
            int f = 0;
            sort(a, a + n);
            for (int i = 0; i < n - 1; i++)
            {
                if (abs(a[i] - a[i + 1]) == 1)
                {
                    f = 1;
                    break;
                }
            }

            if (f)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}