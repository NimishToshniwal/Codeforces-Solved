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
        int n, k, a;
        cin >> n;
        vector<vector<int>> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            v[i].resize(k);
            for (int j = 0; j < k; j++)
            {
                cin >> a;
                v[i][j] = a;
                mp[v[i][j]]++;
            }
        }
        bool f;
        for (int i = 0; i < n; i++)
        {
            f = 1;
            for (int j = 0; j < v[i].size(); j++)
            {
                // cout<<"v[i][j] = "<<v[i][j]<<" mp[v[i][j]] = "<<mp[v[i][j]]<<endl;
                if (mp[v[i][j]] < 2)
                {
                    f = 0;
                    break;
                }
            }
            // cout<<"k = "<<k<<" f = "<<f<<" i = "<<i<<endl;
            if (f == 1)
                break;
        }
        if (f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}