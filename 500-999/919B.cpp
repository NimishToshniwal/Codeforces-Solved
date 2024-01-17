#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int sum(int currans)
{
    int b = 0;
    while (currans)
    {
        b += currans % 10;
        currans /= 10;
    }
    return b;
}
int main()
{

    ios::sync_with_stdio(false);

    int k;
    cin >> k;
    int a = 0;
    while (k != 0)
    {
        a++;
        if (sum(a) == 10)
        {
            k--;
        }
    }
    cout << a;
    return 0;
}