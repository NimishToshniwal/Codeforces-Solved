#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k, MAX = INT_MIN;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> v(26, 0);

    for (int i = 0; i < n; i++)
    {
        v[s[i] - 97]++;
    }
    rep(i, 26)
    {
        if (v[i] > MAX)
        {
            MAX = v[i];
        }
        continue;
    }
    if (MAX > k)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}