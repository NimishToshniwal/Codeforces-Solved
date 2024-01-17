#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
long double nCr(int count, int r)
{
    long double k = 1, l = 1;
    if (r > count)
        return 0.000000000;
    r = min(r, count - r);
    for (long double i = 1; i <= r; i++)
    {
        l *= i;
        k *= (count - i + 1);
    }
    return k / l;
}
int main()
{

    ios::sync_with_stdio(false);

    string s, t;
    cin >> s >> t;
    int n = s.size();
    ll a = 0, b = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        a += (s[i] == '+' ? 1 : -1);
        if (t[i] != '?')
            a -= (t[i] == '+' ? 1 : -1);
        else
            count++;
    }
    if ((count + abs(a)) & 1 || count < abs(a))
    {
        cout << fixed << setprecision(9) << 1.000000000 * 0;
    }
    else
    {
        cout << fixed << setprecision(9) << nCr(count, (count + abs(a)) >> 1) / pow(2, count);
    }
    return 0;
}