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
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        ll sum = 0;
        rep(i, n)
        {
            cin >> a[i];
            sum += a[i];
            mp[a[i]]++;
        }
        if ((2 * sum) % n)
        {
            cout << 0 << endl;
        }
        else
        {
            ll k1 = (2 * sum) / n, cnt = 0;
            int b, c;
            rep(i, n)
            {
                b = a[i];
                c = k1 - b;
                if (mp.count(c))
                    cnt += mp[c];
                if (b == c)
                    cnt--;
            }
            cout << cnt / 2 << endl;
        }
    }

    return 0;
}