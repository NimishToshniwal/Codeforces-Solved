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
        int k, n, m, j1 = 0, j2 = 0, f = 1;
        cin >> k >> n >> m;
        vector<int> a(n), b(m), v;
        rep(i, n) cin >> a[i];
        rep(i, m) cin >> b[i];
        for (int i = 0; i < n + m; i++)
        {
            if (j1 < n && a[j1] <= k)
            {
                v.push_back(a[j1]);
                if (a[j1] == 0)
                    k++;
                // cout<<"i = "<<i<<" a[j1] = "<<a[j1]<<" k = "<<k<<endl;
                j1++;
            }
            else if (j2 < m && b[j2] <= k)
            {
                v.push_back(b[j2]);
                if (b[j2] == 0)
                    k++;
                // cout<<"i = "<<i<<" b[j2] = "<<b[j2]<<" k = "<<k<<endl;
                j2++;
            }
            else
            {
                f = 0;
                break;
            }

            // k++;
            // cout<<"k = "<<k<<endl;
        }
        if (f)
        {
            rep(i, v.size())
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}