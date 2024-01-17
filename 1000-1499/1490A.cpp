#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, cnt = 0, sum = 0;
        cin >> n;
        cin >> a;
        for (int i = 2; i <= n; i++)
        {
            cin >> b;
            int x = min(a, b), y = max(a, b);
            while (x * 2 < y)
            {
                x *= 2;
                sum++;
            }
            a = b;
        }
        cout << sum << endl;
    }
    return 0;
}