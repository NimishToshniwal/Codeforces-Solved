#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int m, s;
    cin >> m >> s;
    if (s == 0)
    {
        if (m == 1)
        {
            cout << "0 0";
        }
        else
            cout << "-1 -1";
        return 0;
    }
    string a = "", b = "";
    rep(i, m)
    {
        int k = min(9, s);
        a += '0' + k;
        s -= k;
    }
    if (s > 0)
    {
        cout << "-1 -1";
        return 0;
    }
    for (int i = m - 1; i >= 0; i--)
    {
        b += a[i];
    }
    int j = 0;
    while (b[j] == '0')
    {
        j++;
    }
    b[0]++;
    b[j]--;
    cout << b << " " << a;
    return 0;
}