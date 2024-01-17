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
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    vector<int> r(n, 1), l(n, 1);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i + 1] > a[i])
        {
            r[i] = r[i + 1] + 1;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            l[i] = l[i - 1] + 1;
        }
    }
    int MAX = 0;
    rep(i, n)
    {
        if (l[i] > MAX)
        {
            MAX = l[i];
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] < a[i + 1])
        {
            if (l[i - 1] + r[i + 1] > MAX)
            {
                MAX = l[i - 1] + r[i + 1];
            }
        }
    }
    cout << MAX << endl;
    return 0;
}