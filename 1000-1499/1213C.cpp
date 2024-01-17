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
        ll n, m, sum = 0;
        cin >> n >> m;
        n /= m;
        vector<int> v(10);
        for (int i = 0; i < 10; i++)
        {
            v[i] = ((i + 1) * m) % 10;
        }
        for (int i = 0; i < 10; i++)
        {
            sum += v[i];
        }
        sum *= (n / 10);
        for (int i = 0; i < (n % 10); i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }

    return 0;
}