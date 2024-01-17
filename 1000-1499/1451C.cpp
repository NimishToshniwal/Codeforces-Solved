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
        int n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        vector<int> c1(26, 0), c2(26, 0);
        rep(i, n)
        {
            c1[a[i] - 'a']++;
            c2[b[i] - 'a']++;
        }
        bool f = 1;
        rep(i, 26)
        {
            if (c1[i] < c2[i] || (c1[i] - c2[i]) % k > 0)
            {
                f = 0;
                break;
            }
            if (i < 25)
            {
                c1[i + 1] += (c1[i] - c2[i]);
            }
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}