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
        int n, x = 0, y = 0, z = 0;
        cin >> n;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] == i + 1 && a[i] != n - i)
                x++;
            else if (a[i] != i + 1 && a[i] == n - i)
                y++;
            else if (a[i] != i + 1 && a[i] != n - i)
                z++;
        }
        // cout<<x<<" "<<y<<" "<<z<<endl;
        if (y + z <= x)
            cout << "First" << endl;
        else if (z + x < y)
            cout << "Second" << endl;
        else
            cout << "Tie" << endl;
    }

    return 0;
}