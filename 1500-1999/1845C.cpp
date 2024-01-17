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
        int m;
        string s, l, r;
        cin >> s >> m >> l >> r;
        bool f = 1;
        int k = 0;
        rep(i, m)
        {
            int MAX = 0;
            for (char j = l[i]; j <= r[i]; j++)
            {
                int pos = s.find(j, k);
                if (pos >= s.size())
                {
                    f = 0;
                    // cout<<"i = "<<i<<" j = "<<j<<endl;
                    break;
                }
                MAX = max(MAX, pos + 1);
            }
            if (!f)
                break;
            k = MAX;
        }
        if (f)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}