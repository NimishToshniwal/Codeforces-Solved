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
        bool f, f1 = 0;
        rep(i, n - 1)
        {
            int k = 0;
            rep(j, i + 1)
            {
                k ^= a[j];
            }
            f = 0;
            int k1 = 0;
            for (int j = i + 1; j < n; j++)
            {
                k1 ^= a[j];
                if (k1 == k)
                {
                    f = 1;
                    k1 = 0;
                }
            }
            if (k1 == 0 && f)
            {
                cout << "YES" << endl;
                f1 = 1;
                break;
            }
        }
        if (!f1)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}