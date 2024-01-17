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
    int MAX = 0, b, c = 1;
    vector<int> a(10, 0);
    while (n)
    {
        b = n % 10;
        MAX = max(MAX, b);
        rep(i, b)
        {
            a[i] += c;
        }
        c *= 10;
        n /= 10;
    }
    cout << MAX << endl;
    rep(i, MAX)
    {
        cout << a[i] << " ";
    }
    return 0;
}