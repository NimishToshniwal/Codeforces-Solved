#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k, l, c1 = 0, c2 = 0;
    cin >> n >> k;
    vector<string> v(n);
    rep(i, n) cin >> v[i];
    string s;
    cin >> s;
    l = s.size();
    rep(i, n)
    {
        if (v[i].size() < l)
            c1++;
        else if (v[i].size() > l)
            c2++;
    }
    // cout<<c1<<" "<<c2<<endl;
    c1 = (c1 + (((c1 / k) * 5) + 1));
    c2 = ((n - c2 - 1) + (((n - c2 - 1) / k) * 5) + 1);
    cout << c1 << " " << c2;
    return 0;
}