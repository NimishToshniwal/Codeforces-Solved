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
        ll k, n, a, b;
        cin >> k >> n >> a >> b;
        if (k - n * a > 0)
            cout << n << endl;
        // else if(b*n<=k) cout<<-1<<endl;
        else
        {
            k = n * a - k;
            if (((k + a - b) / (a - b)) > n)
                cout << -1 << endl;
            else
                cout << n - ((k + a - b) / (a - b)) << endl;
        }
    }

    return 0;
}