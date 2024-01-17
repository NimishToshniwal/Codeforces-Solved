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
        int n;
        cin >> n;
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        int i = 0, j = n - 1, f = 1;
        while (i <= j)
        {
            if (f)
                cout << a[i++] << " ";
            else
                cout << a[j--] << " ";
            f = 1 - f;
        }
        cout << endl;
    }

    return 0;
}