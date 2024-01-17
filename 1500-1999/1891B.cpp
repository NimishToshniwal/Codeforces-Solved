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
        int n, q;
        cin >> n >> q;
        vector<int> a(n), s;
        rep(i, n) cin >> a[i];
        int x;
        cin >> x;
        s.push_back(x);
        rep(i, q - 1)
        {
            cin >> x;
            if (x < s.back())
                s.push_back(x);
        }
        for (auto it : a)
        {
            for (auto x : s)
            {
                if (it % (1 << x) == 0)
                    it += 1 << (x - 1);
            }
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}