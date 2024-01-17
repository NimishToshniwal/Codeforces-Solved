#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int a[n], b[n] = {0};
    rep(i, n)
    {
        cin >> a[i];
        sort(a, a + i);
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            if (sum + a[i] + a[j] > m)
            {
                b[i] = i - j;
                break;
            }
            else
                sum += a[j];
        }
    }
    rep(i, n) cout << b[i] << " ";
    // cout<<endl;

    return 0;
}