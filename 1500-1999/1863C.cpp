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
        ll n, k;
        cin >> n >> k;
        ll sum = (n * (n + 1)) / 2;
        vector<int> a(n);
        rep(i, n)
        {
            cin >> a[i];
            sum -= a[i];
        }
        a.push_back(sum);
        k %= (n + 1);
        rotate(a.begin(), a.end() - k, a.end());
        rep(i, n) cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}