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
    ll k = 5;
    while (n > k)
    {
        n -= k;
        k *= 2;
    }
    // cout << "n = " << n << " k = " << k << endl;
    ll ans = (n * 100) / k;
    if (ans <= 20)
        cout << "Sheldon" << endl;
    else if (ans <= 40)
        cout << "Leonard" << endl;
    else if (ans <= 60)
        cout << "Penny" << endl;
    else if (ans <= 80)
        cout << "Rajesh" << endl;
    else
        cout << "Howard" << endl;

    return 0;
}