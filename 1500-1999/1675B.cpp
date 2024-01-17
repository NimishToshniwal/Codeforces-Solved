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
        int n, c = 0;
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        bool f = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            while (a[i] >= a[i + 1] && a[i] > 0)
            {
                a[i] /= 2;
                c++;
            }
            if (a[i] == a[i + 1])
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            cout << c << endl;
        }
        else
        {
            cout << -1 << endl;
            // cout<<"c : "<<c<<endl;
        }
    }
    return 0;
}