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
        ll n, sum = 0;
        cin >> n;
        while (n > 1)
        {
            sum += n;
            n >>= 1;
        }
        cout << sum + 1 << endl;
    }

    return 0;
}