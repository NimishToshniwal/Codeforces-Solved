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
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
        }
        int i = n - 1;
        for (; i > 0; i--)
        {
            if (a[i - 1] < a[i])
                break;
        }
        int j = i;
        for (; j > 0; j--)
        {
            if (a[j - 1] > a[j])
                break;
        }
        cout << j << endl;
    }

    return 0;
}