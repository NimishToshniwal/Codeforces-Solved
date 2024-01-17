#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, k;
        cin >> A >> B >> k;
        vector<int> a(A), b(B);
        vector<pair<int, int>> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i].first;
        }
        for (int i = 0; i < k; i++)
        {
            cin >> v[i].second;
        }
        for (int i = 0; i < k; i++)
        {
            v[i].first--;
            v[i].second--;

            a[v[i].first]++;
            b[v[i].second]++;
        }
        ll ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans += k - a[v[i].first] - b[v[i].second] + 1;
        }
        cout << ans / 2 << "\n";
    }
}