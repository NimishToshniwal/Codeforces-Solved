#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    vector<bool> v(1e5 + 1, 0);
    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    set<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(a[i]);
        b[i] = s.size();
    }
    int c;
    rep(i, m)
    {
        cin >> c;
        cout << b[c - 1] << endl;
    }
    return 0;
}