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
        int a[n], l, r;
        rep(i, n)
        {
            cin >> a[i];
        }
        bool f = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = n - 1; j >= i + 2; j--)
            {
                if (a[i] == a[j])
                    f = 1;
                if (f)
                    break;
            }
            if (f)
                break;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}