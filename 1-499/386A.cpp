#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, MAX = INT_MIN, MAX_i = 0;
    cin >> n;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] > MAX)
        {
            MAX = a[i];
            MAX_i = i + 1;
        }
    }
    sort(a, a + n);
    cout << MAX_i << " " << a[n - 2];
    return 0;
}