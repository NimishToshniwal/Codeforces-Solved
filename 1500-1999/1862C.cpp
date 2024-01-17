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
        int a[n];
        rep(i, n) cin >> a[i];
        if (a[0] == n)
        {
            vector<int> b(n, 0);
            // b[n-1]=1;
            for (int i = 0; i < n; i++)
            {
                b[a[i] - 1]++;
            }
            for (int i = n - 2; i >= 0; i--)
            {
                b[i] += b[i + 1];
            }
            bool f = 1;
            rep(i, n)
            {
                if (a[i] != b[i])
                {
                    f = 0;
                    break;
                }
            }
            if (f)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}