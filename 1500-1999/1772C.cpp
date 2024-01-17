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
        int k, n, x = 1, count = 1;
        cin >> k >> n;
        vector<int> v;
        rep(i, k)
        {
            v.push_back(x);
            x += count;
            count++;
        }
        if (v[k - 1] > n)
            v[k - 1] = n;
        for (int i = k - 2; i >= 0; i--)
        {
            if (v[i] > n)
                v[i] = v[i + 1] - 1;
        }
        for (int i = k - 2; i >= 0; i--)
        {
            if (v[i] >= v[i + 1])
            {
                v[i] = v[i + 1] - 1;
            }
        }
        rep(i, k)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}