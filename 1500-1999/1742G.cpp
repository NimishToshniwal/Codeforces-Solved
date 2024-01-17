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
        vector<int> v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        int a = 0;
        vector<int> f(n, 0);
        rep(i, min(31, n))
        {
            int OR = 0, ptr = -1;
            rep(j, n)
            {
                if (f[j])
                    continue;
                if (OR < (a | v[j]))
                {
                    OR = (a | v[j]);
                    ptr = j;
                }
            }
            f[ptr] = 1;
            cout << v[ptr] << " ";
            a = a | v[ptr];
            // cout<<"i = "<<i<<" ptr = "<<ptr<<" f[ptr] = "<<f[ptr]<<" a = "<<a<<" OR = "<<OR<<endl;
        }
        rep(i, n)
        {
            if (f[i] == 0)
                cout << v[i] << " ";
        }
        cout << endl;
        // rep(i, n) cout<<f[i]<<" ";
        // cout<<endl;
    }
    return 0;
}