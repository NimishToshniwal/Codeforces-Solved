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
    int a[n + 1];
    rep1(i, n) cin >> a[i];
    ll l = 0, r = n + 1, pref = 0, suff = 0, maxi = 0;
    while (l < r)
    {
        // cout << "l = " << l << " r = " << r << " pref = " << pref << " suff = " << suff << endl;
        if (pref < suff)
            pref += a[++l];
        else if (pref > suff)
            suff += a[--r];
        else
        {
            maxi = l;
            pref += a[++l];
            suff += a[--r];
        }
        // cout << "l = " << l << " r = " << r << " pref = " << pref << " suff = " << suff << " maxi = " << maxi << endl;
    }
    cout << accumulate(a + 1, a + maxi + 1, 0ll);

    return 0;
}