
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k, f = 1;
    cin >> n >> k;
    vector<int> v(n);
    rep(i, n) cin >> v[i];
    sort(v.begin(), v.end());
    ll count = 1, ans = v[n / 2];
    for (int i = n / 2; i < n - 1; i++)
    {
        if (k >= (count * (v[i + 1] - v[i])))
        {
            k -= (count * (v[i + 1] - v[i]));
            count++;
            ans += (v[i + 1] - v[i]);
        }
        else
        {
            f = 0;
            break;
        }
    }
    if (f)
    {
        ans += k / ((n + 1) / 2);
        cout << ans << endl;
    }
    else
    {
        if (count <= k)
            ans += (k / count);
        cout << ans << endl;
    }
    return 0;
}