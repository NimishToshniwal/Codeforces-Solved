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
        int n, m;
        cin >> n;
        vector<vector<int>> v(n), a(n);
        rep(i, n)
        {
            cin >> m;
            int x;
            rep(j, m)
            {
                cin >> x;
                v[i].push_back(x);
            }
        }
        for (int i = 0; i < n; i++)
        {
            sort(v[i].begin(), v[i].end());
            a[i].push_back(v[i][0]);
            a[i].push_back(v[i][1]);
            // cout<<a[i][0]<<" "<<a[i][1]<<endl;
        }
        // for(int i=0;i<n;i++){
        //     cout<<a[i][0]<<" "<<a[i][1]<<endl;
        // }
        int mn = INT_MAX, mini = 0, MIN = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            MIN = min({MIN, a[i][1], a[i][0]});
            if (a[i][1] < mn)
            {
                mn = a[i][1];
                mini = i;
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == mini)
                continue;
            ans += a[i][1];
        }
        ans += MIN;
        cout << ans << endl;
    }

    return 0;
}