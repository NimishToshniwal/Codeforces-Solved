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
        int a[n], count = 0;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] == i + 1)
                count++;
        }
        cout << (count + 1) / 2 << endl;
    }
    return 0;
}