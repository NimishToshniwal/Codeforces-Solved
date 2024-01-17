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
        ll n;
        cin >> n;
        ll count = 1e9, c = 1;
        for (int i = 1; i * i <= n; i++)
        {
            count = min(count, i - 1 + (n - 1) / i);
        }
        cout << count << endl;
    }

    return 0;
}