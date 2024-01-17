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
        ll n;
        cin >> n;
        int MAX = 1, curr = 1;
        rep1(i, 1000)
        {
            if (n % i != 0)
            {
                MAX = max(MAX, curr);
                curr = 1;
            }
            else
                curr++;
        }
        cout << MAX - 1 << endl;
    }

    return 0;
}