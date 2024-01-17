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
        int n, m;
        cin >> n >> m;
        if ((n % 2 == 0 && m % 2 == 0) || (n % 2 == 1 && m % 2 == 1))
            cout << "Tonya" << endl;
        else
            cout << "Burenka" << endl;
    }

    return 0;
}