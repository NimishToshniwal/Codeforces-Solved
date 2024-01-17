#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;
    cin >> n;
    vector<int> v(n);
    rep(i, n)
    {
        cin >> k;
        if (k == 4)
            c1++;
        else if (k == 8 && c1 > c2)
            c2++;
        else if (k == 15 && c2 > c3)
            c3++;
        else if (k == 16 && c3 > c4)
            c4++;
        else if (k == 23 && c4 > c5)
            c5++;
        else if (k == 42 && c5 > c6)
            c6++;
    }
    cout << n - (6 * c6) << endl;

    return 0;
}