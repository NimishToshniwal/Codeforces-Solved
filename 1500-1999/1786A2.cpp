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
        int x = 0, y = 0, f = 1, x1 = 0, y1 = 0, count = 1;
        while (n > 0)
        {
            if (f)
            {
                for (int j = 0; j < min(n, count); j++)
                {
                    if (j % 2 == 1)
                    {
                        x++;
                    }
                    else
                    {
                        x1++;
                    }
                }
                n -= count;
            }
            else
            {
                for (int j = 0; j < min(n, count); j++)
                {
                    if (j % 2 == 1)
                    {
                        y1++;
                    }
                    else
                    {
                        y++;
                    }
                }
                n -= count;
            }
            count += 4;
            f = 1 - f;
        }
        cout << x1 << " " << x << " " << y1 << " " << y << endl;
    }

    return 0;
}