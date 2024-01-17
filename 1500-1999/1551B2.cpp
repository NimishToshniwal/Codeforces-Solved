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
        int n, k;
        cin >> n >> k;
        map<int, vector<int>> mp;
        int v[n], a, req = 0, count = 0, f = 1;
        rep(i, n) v[i] = 0;
        rep(i, n)
        {
            cin >> a;
            if (mp[a].size() < k)
                mp[a].push_back(i);
        }
        for (auto it : mp)
            req += it.second.size();
        req -= (req % k);
        for (auto it : mp)
        {
            for (auto i : it.second)
            {
                v[i] = count + 1;
                count++;
                count %= k;
                if (--req == 0)
                {
                    f = 0;
                    break;
                }
            }
            if (f == 0)
                break;
        }
        rep(i, n) cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}