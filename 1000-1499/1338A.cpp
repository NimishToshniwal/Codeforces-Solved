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
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        int MAX = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                MAX = max(MAX, int(1 + log2(a[i - 1] - a[i])));
                a[i] = a[i - 1];
            }
        }
        cout << MAX << endl;
    }

    return 0;
}