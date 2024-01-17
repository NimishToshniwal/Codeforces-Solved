#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    ll a[n], b[n], c[n];
    rep(i, n)
    {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }
    for (int i = 1; i < n; i++)
    {
        b[i] += b[i - 1];
    }
    sort(c, c + n);
    for (int i = 1; i < n; i++)
    {
        c[i] += c[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            if (l == 1)
            {
                cout << b[r - 1] << endl;
            }
            else
                cout << b[r - 1] - b[l - 2] << endl;
            // cout<<"b[r-1] = "<<b[r-1]<<endl;
            // cout<<"b[l-1] = "<<b[l-1]<<endl;
        }
        else
        {
            if (l == 1)
            {
                cout << c[r - 1] << endl;
            }
            else
                cout << c[r - 1] - c[l - 2] << endl;
            // cout<<"c[r-1] = "<<c[r-1]<<endl;
            // cout<<"c[l-1] = "<<c[l-1]<<endl;
        }
    }
    return 0;
}