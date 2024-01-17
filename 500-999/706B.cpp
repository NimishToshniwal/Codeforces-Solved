#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, x, result;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    sort(a, a + n);
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        result = upper_bound(a, a + n, x) - a; // upper bound is an int * type of value
        cout << result << endl;
    }

    return 0;
}