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
        int x = 1, y = 0, f = 1, count = 5;
        n--;
        while (n > 0)
        {
            if (f == 1)
            {
                if (count <= n)
                {
                    y += count;
                    n -= count;
                }
                else
                {
                    y += n;
                    n = 0;
                }
                f = 1 - f;
            }
            else
            {
                if (count <= n)
                {
                    x += count;
                    n -= count;
                }
                else
                {
                    x += n;
                    n = 0;
                }
                f = 1 - f;
            }
            count += 4;
        }
        cout << x << " " << y << endl;
    }

    return 0;
}