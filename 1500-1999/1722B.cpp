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
        int n;
        cin >> n >> a >> b;
        int c = 0;
        for (int j = 0; j < n; ++j)
        {
            if (a[j] == b[j] || abs(a[j] - b[j]) == 5)
                c++;
        }
        if (c == n)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}