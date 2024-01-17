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
    if (n % 2 == 0)
    {
        cout << ((n / 2) + 1) * ((n / 2) + 1);
    }
    else
    {
        cout << (n + 3) * (n + 1) / 2;
    }

    return 0;
}