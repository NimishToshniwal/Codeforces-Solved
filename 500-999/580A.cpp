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
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    int count = 0, MAXcount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            count++;
            if (MAXcount < count)
            {
                MAXcount = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    cout << MAXcount + 1;

    return 0;
}