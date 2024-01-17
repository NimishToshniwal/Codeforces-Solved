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
        int n, k;
        cin >> n >> k;
        if (!k)
            cout << "NO" << endl;
        else if (k % 2 == 0)
        {
            if (k % 4 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                for (int i = 2; i <= n; i += 2)
                {
                    if (i % 4 == 0)
                        cout << i - 1 << " " << i << endl;
                    else
                        cout << i << " " << i - 1 << endl;
                }
            }
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 2; i <= n; i += 2)
            {
                cout << i - 1 << " " << i << endl;
            }
        }
    }
    return 0;
}