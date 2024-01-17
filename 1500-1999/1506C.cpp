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
        string a, b;
        cin >> a >> b;
        int n, m, MIN, MAX = 0;
        n = a.size(), m = b.size();
        MIN = min(m, n);
        for (int i = 1; i <= MIN; i++)
        {
            for (int j = 0; j <= n - i; j++)
            {
                for (int k = 0; k <= m - i; k++)
                {
                    if (a.substr(j, i) == b.substr(k, i))
                        MAX = max(MAX, i);
                }
            }
        }
        cout<<m+n-2*(MAX)<<endl;
    }

    return 0;
}