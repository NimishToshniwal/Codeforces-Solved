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
        cin >> n;
        vector<int> v(n + 1, 0);
        rep(i, n)
        {
            cin >> k;
            v[k]++;
        }
        int MAX = 0;
        for (int s = 2; s <= 2 * n; s++)
        {
            int count = 0;
            for (int i = 1; i < (s + 1) / 2; i++)
            {
                if (i < s - n)
                    continue;
                else
                    count += min(v[i], v[s - i]);
            }
            if (s % 2 == 0)
                count += v[s / 2] / 2;
            MAX = max(MAX, count);
        }
        cout << MAX << endl;
    }

    return 0;
}