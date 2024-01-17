#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size();
    int lsum[n], rsum[n], MIN = n;
    lsum[0] = 0;
    for (int i = 1; i < n; i++)
    {
        lsum[i] = lsum[i - 1];
        if (s[i - 1] >= 'a' && s[i - 1] <= 'z')
            lsum[i]++;
    }
    rsum[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        rsum[i] = rsum[i + 1];
        if (s[i + 1] >= 'A' && s[i + 1] <= 'Z')
            rsum[i]++;
    }
    rep(i, n) MIN = min(MIN, rsum[i] + lsum[i]);
    cout << MIN;
    return 0;
}