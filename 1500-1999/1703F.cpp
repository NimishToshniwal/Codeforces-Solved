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
        vector<int> v(n + 1), need;
        rep1(i, n) cin >> v[i];
        ll count = 0;
        rep1(i, n)
        {
            if (v[i] >= i)
                continue;
            count += lower_bound(need.begin(), need.end(), v[i]) - need.begin();
            need.push_back(i);
        }
        cout << count << endl;
    }

    return 0;
}