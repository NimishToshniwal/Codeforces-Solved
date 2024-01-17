#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, f = 0;
    cin >> n;
    vector<int> v(n);
    rep(i, n) cin >> v[i];
    for (int i = 3; i <= n; i++)
    {
        if (n % i == 0)
        {
            rep(j, n / i)
            {
                int count = 0;
                for (int k = j; k < n; k += (n / i))
                {
                    count += v[k];
                }
                if (count == i)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                break;
        }
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}