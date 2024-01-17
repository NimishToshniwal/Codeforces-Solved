#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int s, n;
    cin >> s >> n;
    pair<int, int> a[n];
    rep(i, n) cin >> a[i].first >> a[i].second;
    sort(a, a + n);
    rep(i, n)
    {
        if (s <= a[i].first)
        {
            cout << "NO";
            return 0;
        }
        else
            s += a[i].second;
    }
    cout << "YES";

    return 0;
}