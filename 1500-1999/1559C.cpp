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
        int a[n + 1];
        rep1(i, n) cin >> a[i];
        if (a[1] == 1)
        {
            cout << n + 1 << " ";
            rep1(i, n) cout << i << " ";
            cout << endl;
        }
        else
        {
            bool f = 0;
            rep1(i, n)
            {
                if (a[i] == 0 && a[i + 1] == 1)
                {
                    f = 1;
                    rep1(j, i) cout << j << " ";
                    cout << n + 1 << " ";
                    for (int j = i + 1; j <= n; j++)
                        cout << j << " ";
                    cout << endl;
                    break;
                }
            }
            if (f == 0)
            {
                rep1(i, n) cout << i << " ";
                cout << n + 1 << " " << endl;
            }
        }
    }

    return 0;
}