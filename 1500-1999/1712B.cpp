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
            for (int i = 0; i < n; i += 2)
            {
                cout << i + 2 << " " << i + 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << 1 << " ";
            for (int i = 1; i < n; i += 2)
            {
                cout << i + 2 << " " << i + 1 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}