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
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((n % 2 == 0) && ((j - i) == n / 2))
                    cout << 0 << " ";
                else if ((j - i) * 2 < n)
                    cout << 1 << " ";
                else
                    cout << -1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}