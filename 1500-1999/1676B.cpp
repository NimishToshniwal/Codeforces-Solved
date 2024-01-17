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
        cin >> n;
        ll MAX = 10000000000;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            if (c < MAX)
            {
                MAX = c;
            }
            sum += c;
        }
        cout << sum - (MAX * n) << endl;
    }

    return 0;
}