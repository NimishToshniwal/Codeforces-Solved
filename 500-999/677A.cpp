#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, h, count = 0;
    cin >> n >> h;
    vector<int> v(n);
    rep(i, n)
    {
        cin >> v[i];
        if (v[i] > h)
            count += 2;
        else
            count++;
    }
    cout << count << endl;

    return 0;
}