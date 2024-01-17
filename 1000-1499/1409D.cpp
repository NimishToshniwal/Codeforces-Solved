#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int sum(ll n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        int s;
        cin >> n >> s;
        if (sum(n) <= s)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            ll a = 0, b = 1, c;
            for (int i = 0; i < 18; i++)
            {
                int d = (n / b) % 10;
                c = b * ((10 - d) % 10);
                n += c;
                a += c;
                if (sum(n) <= s)
                {
                    break;
                }
                b *= 10;
            }
            cout << a << endl;
        }
    }
    return 0;
}