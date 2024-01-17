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
        ll a[n], sum = 0;
        rep(i, n)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        rep(i, n)
        {
            if (i % 2 == 0)
            {
                if (a[i] % 2 == 0)
                    sum += a[i];
            }
            else
            {
                if (a[i] % 2 == 1)
                    sum -= a[i];
            }
        }
        if (sum == 0)
        {
            cout << "Tie" << endl;
        }
        else if (sum > 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    return 0;
}