#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int c[100005], a[100005];
int main()
{

    ios::sync_with_stdio(false);

    int n, q, k;
    cin >> n;
    rep(i, 10005) c[i] = 0;
    rep(i, n)
    {
        cin >> k;
        a[k]++;
        c[a[k]]++;
    }
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch >> k;
        if (ch == '+')
        {
            a[k]++;
            c[a[k]]++;
        }
        else
        {
            c[a[k]]--;
            a[k]--;
        }
        if (c[8] > 0 || (c[4] > 0 && c[2] > 2) || (c[4] > 1) || (c[2] > 1 && c[6] > 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}