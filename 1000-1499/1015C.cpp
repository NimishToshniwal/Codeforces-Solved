#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, m, currsum = 0, reqsum = 0;
    cin >> n >> m;
    int a[n], b[n], diff[n];
    rep(i, n)
    {
        cin >> a[i] >> b[i];
        diff[i] = a[i] - b[i];
        currsum += a[i];
        reqsum += b[i];
    }
    if (reqsum > m)
        cout << -1 << endl;
    else
    {
        int count = 0;
        sort(diff, diff + n);
        for (int i = n - 1; i >= 0; i--)
        {
            if (currsum <= m)
                break;
            else
            {
                currsum -= diff[i];
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}