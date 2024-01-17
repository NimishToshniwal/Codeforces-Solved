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
        int n, k = 0;
        cin >> n;
        int m = (n * (n - 1)) / 2, count = n - 1;
        vector<int> a;
        int b[m];
        rep(i, m) cin >> b[i];
        sort(b, b + m);
        // rep(i,m) cout<<b[i]<<" ";
        // cout<<endl;
        while (k < m)
        {
            a.push_back(b[k]);
            k += count;
            count--;
        }
        for (auto it : a)
            cout << it << " ";
        cout << a.back() << " ";
        cout << endl;
    }
    return 0;
}
