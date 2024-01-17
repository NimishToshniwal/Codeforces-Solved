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
        int n, count = 0;
        cin >> n;
        int a[n];
        map<int, int> mp;
        rep(i, n)
        {
            cin >> a[i];
            mp[a[i]] = i;
        }
        for (int i = 1; i < n; i++)
        {
            if (mp[i] > mp[i + 1])
                count++;
        }
        cout << count << endl;
    }

    return 0;
}