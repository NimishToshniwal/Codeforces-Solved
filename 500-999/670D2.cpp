#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n, k;
    cin >> n >> k;
    ll a[n], b[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    ll s = 0, e = 2000000000, mid;
    // cout<<"s = "<<s<<" e = "<<e<<endl;
    while (s <= e)
    {
        ll need = 0, mid = s + (e - s) / 2;
        for (int i = 0; i < n; i++)
        {
            need += max(0ll, mid * a[i] - b[i]);
            if (need > k)
                break;
        }
        if (need <= k)
            s = mid + 1;
        else
            e = mid - 1;
        // cout<<"s = "<<s<<" e = "<<e<<endl;
    }
    cout << e << endl;

    return 0;
}