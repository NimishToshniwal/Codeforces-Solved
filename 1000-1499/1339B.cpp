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
        vector<ll> v(n), v1;
        rep(i, n)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        bool f = 0;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            if (f)
                v1.push_back(v[i++]);
            else
                v1.push_back(v[j--]);
            f = 1 - f;
        }
        reverse(v1.begin(), v1.end());
        rep(i, n)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}