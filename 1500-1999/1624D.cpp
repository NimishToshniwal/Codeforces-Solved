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
        int n, k, c1 = 0, c0 = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v(26, 0);
        for (auto it : s)
            v[it - 'a']++;
        for (auto it : v)
        {
            c0 += it / 2;
            c1 += it % 2;
        }
        c1 += (c0 % k) * 2;
        if (c1 >= k)
            cout << (((c0 / k) * 2) + 1) << endl;
        else
            cout << ((c0 / k) * 2) << endl;
    }

    return 0;
}