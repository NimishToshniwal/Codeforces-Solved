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
        vector<ll> v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (i + v[i] >= n)
            {
                continue;
            }
            else
            {
                v[i] += v[i + v[i]];
            }
        }
        int MAX = INT_MIN;
        rep(i, n)
        {
            if (v[i] > MAX)
            {
                MAX = v[i];
            }
        }
        cout << MAX << endl;
        // rep(i,n){
        //     cout<<v[i]<<" ";
        // }
    }
    return 0;
}