#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, c = 0;
    cin >> n;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] == 1)
            c++;
    }
    if (c)
        cout << n - c << endl;
    else
    {
        int MIN = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int temp = a[i];
            for (int j = i + 1; j < n; j++)
            {
                temp = __gcd(temp, a[j]);
                // cout << "temp = " << temp << " i = " << i << " j = " << j << endl;
                if (temp == 1)
                {
                    MIN = min(MIN, j - i + 1);
                    break;
                }
            }
        }
        if (MIN == INT_MAX)
            cout << -1 << endl;
        else
            cout << MIN + (n - 2) << endl;
    }
    return 0;
}