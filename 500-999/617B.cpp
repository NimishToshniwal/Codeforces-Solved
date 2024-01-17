#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k, temp = -1, ans = 0;
    cin >> n;
    rep(i, n)
    {
        cin >> k;
        if (k)
        {
            if (temp == -1)
                ans = 1;
            else
                ans *= (i - temp);
            temp = i;
        }
    }
    cout << ans << endl;

    return 0;
}