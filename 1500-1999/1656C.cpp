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
        int n, f = 0;
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] == 1)
                f = 1;
        }
        if (f == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            f = 1;
            sort(a, a + n);
            for (int i = 1; i < n; i++)
            {
                if (abs(a[i] - a[i - 1]) == 1)
                {
                    f = 0;
                    break;
                }
            }
            if (f)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}