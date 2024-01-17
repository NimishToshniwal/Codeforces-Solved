#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int MIN[m], MAX[m];
    for (int i = 0, j = 0; i < n && j < m; i++)
    {
        if (s[i] == t[j])
        {
            MIN[j] = i;
            j++;
        }
    }
    for (int i = n - 1, j = m - 1; i >= 0 && j >= 0; i--)
    {
        if (s[i] == t[j])
        {
            MAX[j] = i;
            j--;
        }
    }
    // rep(i, m) cout<<MIN[i]<<" ";
    // cout<<endl;
    // rep(i, m) cout<<MAX[i]<<" ";
    // cout<<endl;
    int ans = 0;
    for (int i = 1; i < m; i++)
    {
        ans = max(ans, MAX[i] - MIN[i - 1]);
    }
    cout << ans << endl;

    return 0;
}