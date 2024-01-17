#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int a1, a2, count = 0;
    cin >> a1 >> a2;
    while (a1 > 0 && a2 > 0)
    {
        if (a1 == 1 && a2 == 1)
            break;
        if (a1 > a2)
        {
            a1 -= 2;
            a2++;
        }
        else
        {
            a1++;
            a2 -= 2;
        }
        count++;
    }
    cout << count << endl;

    return 0;
}