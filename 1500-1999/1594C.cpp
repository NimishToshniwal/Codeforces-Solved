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
        char c;
        string s;
        cin >> n >> c >> s;
        int last_idx = -1;
        bool f = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != c)
                f = 0;
            else if (last_idx < 0)
                last_idx = i + 1;
        }
        if (f)
            cout << 0 << endl;
        else if (2 * last_idx > n)
            cout << 1 << endl
                 << last_idx << endl;
        else
            cout << 2 << endl
                 << n - 1 << " " << n << endl;
    }

    return 0;
}