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
        int n, count = 0;
        cin >> n;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        if (n % 2 == 1)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < n - 1; i += 2)
            {
                if (a[i] == a[i + 1])
                    count++;
                else
                    count += 2;
            }
            cout << count << endl;
            for (int i = 0; i < n - 1; i += 2)
            {
                if (a[i] == a[i + 1])
                    cout << i + 1 << " " << i + 2 << endl;
                else
                    cout << i + 1 << " " << i + 1 << endl
                         << i + 2 << " " << i + 2 << endl;
            }
        }
    }

    return 0;
}