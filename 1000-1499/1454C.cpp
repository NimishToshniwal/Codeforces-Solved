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
        vector<int> a(n), v(n + 1, 1);
        rep(i, n) cin >> a[i];
        n = unique(a.begin(), a.end()) - a.begin();
        a.resize(n);
        rep(i, n) v[a[i]]++;
        v[a[0]]--;
        v[a[n - 1]]--;
        int MIN = INT_MAX;
        rep(i, n) MIN = min(MIN, v[a[i]]);
        cout << MIN << endl;
    }

    return 0;
}