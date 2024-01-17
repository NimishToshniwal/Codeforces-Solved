#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int j = 0, k = 0;
    rep(i, n)
    {
        cin >> a[i] >> b[i];
        if (a[j] < b[k])
            j++;
        else
            k++;
    }
    rep(i, n)
    {
        if (i < max(j, n / 2))
            cout << 1;
        else
            cout << 0;
    }
    cout << endl;
    rep(i, n)
    {
        if (i < max(k, n / 2))
            cout << 1;
        else
            cout << 0;
    }
    cout << endl;

    return 0;
}