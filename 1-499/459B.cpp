#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll count, sum = a[n - 1] - a[0], count1 = 1, countn = 1;
    if (sum)
    {
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[0])
            {
                count1++;
            }
            else
            {
                break;
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] == a[n - 1])
            {
                countn++;
            }
            else
            {
                break;
            }
        }
        count = count1 * countn;
    }
    else
    {
        count = (n * (n - 1)) / 2;
    }
    cout << sum << " " << count;
    return 0;
}