#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    if (n <= 5 || n % 2 == 1)
    {
        cout << 0;
    }
    else
    {
        if ((n / 2) % 2 == 0)
        {
            cout << (n / 2) / 2 - 1;
        }
        else
        {
            cout << (n / 2) / 2;
        }
    }
    return 0;
}