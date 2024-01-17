#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m, count = 0;
    cin >> n >> m;
    while (n != m)
    {
        if (n > m)
        {
            m++;
            count++;
        }
        else
        {
            if (m % 2 == 0)
            {
                m /= 2;
                count++;
            }
            else
            {
                m++;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}