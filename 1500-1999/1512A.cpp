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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0 && a[i] != a[i + 1] && a[i] != a[i + 2])
            {
                cout << (i + 1) << endl;
                break;
            }
            if (i == 0 && a[i] != a[i + 1] && a[i] == a[i + 2])
            {
                continue;
            }
            if (i == n - 1)
            {
                cout << (i + 1) << endl;
                break;
            }
            if (a[i] != a[i + 1] && a[i] != a[i - 1])
            {
                cout << (i + 1) << endl;
                break;
            }
        }
    }

    return 0;
}