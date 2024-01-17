#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    if (n <= 2 * k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << n * k << endl;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cout << i << " " << (i + j) % n + 1 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}