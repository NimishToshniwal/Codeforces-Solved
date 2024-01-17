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
    int n = s.size(), idx = n - 1;
    rep(i, n - 1)
    {
        if ((s[i] - '0') % 2 == 0)
        {
            idx = i;
            if (s[n - 1] > s[i])
                break;
        }
    }
    if (idx == (n - 1))
        cout << -1 << endl;
    else
    {
        swap(s[idx], s[n - 1]);
        cout << s << endl;
    }

    return 0;
}