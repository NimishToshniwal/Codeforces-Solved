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
        int n, c0 = 0, c1 = 0, mino = INT_MAX, mine = INT_MAX;
        cin >> n;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
            {
                mino = min(mino, a[i]);
                c1++;
            }
            else
            {
                mine = min(mine, a[i]);
                c0++;
            }
        }
        if (c0 == n || c1 == n)
            cout << "Yes" << endl;
        else
        {
            if (mine < mino)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }

    return 0;
}