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
    vector<string> v(n);
    rep(i, n) cin >> v[i];
    sort(v.begin(), v.end(), [&](const string &a, const string &b)
         { return a.size() < b.size(); });
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1].find(v[i]) == -1)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    for (auto it : v)
        cout << it << endl;

    return 0;
}