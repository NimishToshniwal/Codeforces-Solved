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
        int n, k;
        cin >> n >> k;
        int a[n];
        rep(i, n) cin >> a[i];
        if (a[0] == a[n - 1])
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == a[0])
                    count++;
            }
            if (count >= k)
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int x = a[0], y = a[n - 1], c1 = 0, c2 = 0, i1 = 0, i2 = n - 1;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == x)
                {
                    if (c1 < k)
                        c1++;
                    else
                    {
                        break;
                    }
                    i1 = i;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] == y)
                {
                    if (c2 < k)
                        c2++;
                    else
                    {
                        break;
                    }
                    i2 = i;
                }
            }
            if (c1 < k || c2 < k)
                cout << "NO" << endl;
            else
            {
                if (i1 < i2)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}