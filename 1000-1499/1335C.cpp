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
        int a[n];
        set<int> s;
        map<int, int> mp;
        int MAX = INT_MIN;
        rep(i, n)
        {
            cin >> a[i];
            s.insert(a[i]);
            mp[a[i]]++;
            MAX = max(MAX, mp[a[i]]);
        }
        if (s.size() > MAX)
            cout << MAX << endl;
        else if (s.size() == MAX)
            cout << MAX - 1 << endl;
        else
            cout << s.size() << endl;
    }

    return 0;
}