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
        ll n, c = 0;
        cin >> n;
        ll a[n];
        rep(i, n) cin >> a[i];
        bool f;
        if (n == 1)
            cout << n << endl;
        else if (n == 2)
        {
            if (a[0] == a[1])
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else
        {
            vector<int> v;
            for (int i = 1; i < n; i++)
            {
                if (a[i] - a[i - 1] != 0)
                    if (a[i] - a[i - 1] > 0)
                        v.push_back(1);
                    else
                        v.push_back(-1);
            }

            if (v.size() == 0)
                cout << 1 << endl;
            else
            {
                vector<int> b;
                for (int i = 1; i < v.size(); i++)
                {
                    if (v[i] != v[i - 1])
                        c++;
                }
                cout << c + 2 << endl;
            }
        }
    }

    return 0;
}