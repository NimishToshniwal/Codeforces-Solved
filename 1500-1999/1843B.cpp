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
        ll n, k;
        ll sum = 0;
        cin >> n;
        vector<ll> v;
        rep(i, n)
        {
            cin >> k;
            if (k != 0)
                v.push_back(k);
            sum += abs(k);
        }
        k = v.size();
        ll s1 = 0;
        int count = 0, j = 0;

        for (int i = 0; i < k; i++)
        {
            if (v[i] < 0)
                count++;
            else
            {
                if (count != 0)
                {
                    count = 0;
                    j++;
                }
            }
        }

        if (count > 0)
            j++;
        cout << sum << " " << j << endl;
    }

    return 0;
}