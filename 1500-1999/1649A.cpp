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
        int i = 0, j = n - 1;
        while (a[i] == 1)
        {
            i++;
        }
        if (i != n - 1)
        {
            while (a[j] == 1)
                j--;
        }
        // cout<<i<<" "<<j<<endl;
        if (i > j)
            cout << 0 << endl;
        else if (i == j)
            cout << 2 << endl;
        else
            cout << j - i + 2 << endl;
    }

    return 0;
}