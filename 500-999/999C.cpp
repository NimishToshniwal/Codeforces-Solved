#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v(26, 0);
    rep(i, n) v[s[i] - 'a']++;
    rep(i, 26)
    {
        if (v[i] <= k)
        {
            k -= v[i];
            v[i] = 0;
        }
        else
        {
            v[i] -= k;
            k = 0;
            break;
        }
    }
    vector<char> s1;
    for (int i = n - 1; i >= 0; i--)
    {

        if (v[s[i] - 'a'] > 0)
        {
            s1.push_back(s[i]);
            v[s[i] - 'a']--;
        }
    }
    reverse(s1.begin(), s1.end());
    rep(i, s1.size()) cout << s1[i];

    return 0;
}