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
        int n, k;
        cin >> n >> k;
        int a[n], count = 0;
        rep(i, n)
        {
            cin >> a[i];
        }
        rep(i, k)
        {
            if (a[i] > k)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}