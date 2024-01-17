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
        cin >> n >> m;
        vector<int> k(n), c(m);
        rep(i, n)
        {
            cin >> k[i];
        }
        rep(i, m)
        {
            cin >> c[i];
        }
        sort(k.begin(), k.end(), greater<int>());
        ll sum = 0;
        int curr = 0;
        rep(i, n)
        {
            if (curr < m)
            {
                if (c[curr] < c[k[i] - 1])
                {
                    sum += c[curr];
                    curr++;
                    // cout<<c[curr]<<" "<<c[k[i]-1]<<endl;
                    // cout<<"One"<<endl;
                }
                else
                {
                    sum += c[k[i] - 1];
                    // cout<<"Two"<<endl;
                }
            }
            else
            {
                sum += c[k[i] - 1];
                // cout<<"Three"<<endl;
            }
            // cout<<"curr = "<<curr<<" i = "<<i<<" Sum = "<<sum<<endl;
        }
        cout << sum << endl;
    }

    return 0;
}