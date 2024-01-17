#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    if (n > 26)
        cout << -1 << endl;
    else
    {
        vector<int> v(26, 0);
        rep(i, n)
        {
            v[s[i] - 'a']++;
        }
        rep(i, 26)
        {
            if (v[i] > 1)
                count += (v[i] - 1);
        }
        cout << count << endl;
    }
    return 0;
}
