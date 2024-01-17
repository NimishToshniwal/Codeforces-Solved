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
        int n, idx;
        cin >> n;
        int m[n][n];
        vector<int> v, count(n + 1, 0);
        rep(i, n)
        {
            rep(j, n - 1)
            {
                cin >> m[i][j];
                if (j == 0)
                    count[m[i][j]]++;
            }
        }
        // rep1(i, n) cout<<count[i]<<" ";
        // cout<<endl;
        rep1(i, n)
        {
            if (count[i] == n - 1)
            {
                v.push_back(i);
                idx = i;
                // cout<<"i = "<<i<<" if"<<endl;
                break;
            }
        }
        // for(auto it:v) cout<<it<<" ";
        // cout<<endl;
        // cout<<"idx = "<<idx<<endl;
        rep(i, n)
        {
            if (m[i][0] != idx)
            {
                idx = i;
                break;
            }
        }
        // cout<<"idx = "<<idx<<endl;
        for (int i = 0; i < n - 1; i++)
        {
            v.push_back(m[idx][i]);
        }
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}