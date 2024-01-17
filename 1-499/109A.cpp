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
    int a = 0, b = 0;
    while (n >= 0)
    {
        if (n % 7 == 0)
        {
            a = n / 7;
            n = 0;
            break;
        }
        b++;
        n -= 4;
    }
    if (n == 0)
    {
        rep(i, b)
        {
            cout << "4";
        }
        rep(i, a)
        {
            cout << "7";
        }
    }
    else
        cout << -1;
    return 0;
}