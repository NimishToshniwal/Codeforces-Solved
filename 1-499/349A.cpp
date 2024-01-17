#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n;
    int c0 = 0, c1 = 0, c2 = 0, f = 1;
    while (n--)
    {
        cin >> k;
        if (k == 25)
            c0++;
        else if (k == 50)
        {
            c1++;
            if (c0 > 0)
                c0--;
            else
                f = 0;
        }
        else
        {
            c2++;
            if (c1 > 0)
            {
                c1--;
                if (c0 > 0)
                {
                    c0--;
                }
                else
                    f = 0;
            }
            else if (c0 > 2)
            {
                c0 -= 3;
            }
            else
                f = 0;
        }
    }
    if (f == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}