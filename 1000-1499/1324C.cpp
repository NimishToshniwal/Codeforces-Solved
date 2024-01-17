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
        string s;
        cin >> s;
        int n = s.size(), c = 0, MAX = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                c++;
            else
            {
                c = 0;
            }
            MAX = max(c, MAX);
        }
        MAX = max(c, MAX);
        cout << MAX + 1 << endl;
    }

    return 0;
}