#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int count_min(string s)
{
    string s1 = "ACTG";
    int count = 0;
    rep(i, 4)
    {
        int diff = abs(s1[i] - s[i]);
        count += min(26 - diff, diff);
    }
    return count;
}

int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = INT_MAX;
    for (int i = 3; i < n; i++)
    {
        string k = s.substr(i - 3, 4);
        ans = min(ans, count_min(k));
    }
    cout << ans << endl;

    return 0;
}