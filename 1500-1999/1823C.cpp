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
        int n, ans = 0, c = 0;
        cin >> n;
        int a[n];
        map<int, int> mp;
        rep(i, n)
        {
            cin >> a[i];
            for (int j = 2; j * j <= a[i]; j++)
            {
                while (a[i] % j == 0)
                {
                    a[i] /= j;
                    mp[j]++;
                }
            }
            if (a[i] != 1)
                mp[a[i]]++;
        }
        for (auto it : mp)
        {
            ans += ((it.second) / 2);
            c += ((it.second) % 2);
        }
        ans += c / 3;
        cout << ans << endl;
    }

    return 0;
}