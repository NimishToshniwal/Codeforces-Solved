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
        ll n;
        cin >> n;
        ll a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        ll k = -1, sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != 0)
            {
                k = i;
                break;
            }
        }
        if (k != -1)
        {
            // cout<<"k = "<<k<<endl;
            for (int i = k; i < n - 1; i++)
            {
                if (a[i] == 0)
                {
                    sum++;
                }
                else
                {
                    sum += a[i];
                }
            }
            cout << sum << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}