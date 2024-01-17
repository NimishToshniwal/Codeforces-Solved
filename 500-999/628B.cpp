#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    ll n = s.size(), count = 0;
    rep(i, n)
    {
        if ((s[i] - '0') % 4 == 0)
            count++;
        if (i > 0)
        {
            if (((s[i - 1] - '0') * 10 + (s[i] - '0')) % 4 == 0)
                count += i;
        }
    }
    cout << count << endl;
    return 0;
}