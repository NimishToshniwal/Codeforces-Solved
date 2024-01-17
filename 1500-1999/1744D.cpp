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
        int n, count = 0;
        cin >> n;
        int a[n];
        rep(i, n)
        {
            cin >> a[i];
            int k = 2;
            while (a[i] % k == 0)
            {
                count++;
                k *= 2;
            }
        }
        if (count >= n)
            cout << 0 << endl;
        else
        {
            int c = 0, idx = 0;
            vector<int> v;
            rep1(i, n)
            {
                int k = 2;
                c = 0;
                while (i % k == 0)
                {
                    c++;
                    k *= 2;
                }
                v.push_back(c);
            }
            sort(v.begin(), v.end(), greater<int>());
            rep(i, n)
            {
                count += v[i];
                idx = i;
                if (count >= n)
                    break;
            }
            if (count < n)
                cout << -1 << endl;
            else
                cout << idx + 1 << endl;
        }

        // cout<<count<<endl;
    }

    return 0;
}