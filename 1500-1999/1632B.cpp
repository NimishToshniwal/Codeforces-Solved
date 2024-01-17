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
        int n, m, l;
        cin >> n;
        m = floor(log2(n - 1));
        l = pow(2, m);
        for (int i = 1; i < l; i++)
        {
            cout << i << " ";
        }
        cout << 0 << " ";
        for (int i = l; i < n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}