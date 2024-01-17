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
        if (n == 2)
            cout << -1 << endl;
        else
        {
            if (n == 1)
                cout << 1 << endl;
            else
            {
                int m = n * n, count = 1;
                vector<int> v(m);
                for (int i = 0; i < m; i += 2)
                {
                    v[i] = count++;
                }
                for (int i = 1; i < m; i += 2)
                {
                    v[i] = count++;
                }
                for (int i = 0; i < m; i++)
                {
                    if (i != 0 && i % n == 0)
                        cout << endl;
                    cout << v[i] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}