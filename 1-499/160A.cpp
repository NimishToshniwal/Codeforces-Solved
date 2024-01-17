#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, count = 0, sum1 = 0;
    cin >> n;
    int a[n], sum = 0;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    sum = sum / 2;
    for (int i = n - 1; i >= 0; i--)
    {
        sum1 += a[i];
        count++;
        if (sum1 > sum)
        {
            break;
        }
    }
    cout << count;
    return 0;
}