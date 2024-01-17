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
        ll a[n], MAX = 0, MAXi;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] >= MAX)
            {
                MAX = a[i];
                MAXi = i;
            }
        }
        ll MAX1 = a[n - 1];
        // cout<<MAX1<<endl;
        int count = 0;
        for (int i = n - 2; i >= MAXi; i--)
        {
            if (a[i] > MAX1)
            {
                count++;
                MAX1 = a[i];
            }
            // cout<<a[i];
        }
        cout << count << endl;
        // cout<<MAX<<" "<<MAXi<<endl;
    }
    return 0;
}