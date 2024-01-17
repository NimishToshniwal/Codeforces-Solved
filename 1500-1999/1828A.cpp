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
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n; i++)
                cout << 2 * i << " ";
            cout << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}