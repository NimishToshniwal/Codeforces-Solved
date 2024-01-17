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
        int n, x;
        cin >> n >> x;
        int a[2 * n];
        rep(i, 2 * n)
        {
            cin >> a[i];
        }
        sort(a, a + 2 * n);
        bool f = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i + n] - a[i] >= x)
            {
                continue;
            }
            else
            {
                f = 0;
                // cout<<"i = "<<i<<endl;
                // cout<<a[i+n]-a[i]<<endl;
                break;
            }
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}