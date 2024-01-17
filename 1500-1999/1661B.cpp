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
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    vector<int> v;
    rep(i, n)
    {
        ll ans = 20;
        rep(j, 16)
        {
            rep(k, 16)
            {
                if (((a[i] + j) << k) % 32768 == 0)
                    ans = min(ans, j + k);
            }
        }
        v.push_back(ans);
    }
    rep(i, n)
    {
        cout << v[i] << " ";
    }
    return 0;
}