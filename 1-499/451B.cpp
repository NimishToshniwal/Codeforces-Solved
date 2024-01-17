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
    int a[n], b[n];
    rep(i, n)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int low = -1, high = -1;
    map<int, int> mp;
    rep(i, n)
    {
        mp[b[i]] = i;
    }
    rep(i, n)
    {
        a[i] = mp[a[i]];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != i)
        {
            high = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i)
        {
            low = i;
            break;
        }
    }
    if (low == -1 || high == -1)
    {
        cout << "yes" << endl
             << 1 << " " << 1 << endl;
    }
    else
    {
        reverse(a + low, a + high + 1);
        bool f = 1;
        rep(i, n)
        {
            if (a[i] != i)
            {
                f = 0;
            }
        }
        if (f)
        {
            cout << "yes" << endl
                 << low + 1 << " " << high + 1 << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}