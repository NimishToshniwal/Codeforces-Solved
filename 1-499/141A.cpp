#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string a, b, c;
    cin >> a >> b >> c;
    string k = a + b;
    sort(k.begin(), k.end());
    sort(c.begin(), c.end());
    if (k == c)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}