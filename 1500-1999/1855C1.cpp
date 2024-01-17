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
        ll n, MAX = -21, maxi;
        cin >> n;
        ll a[n];
        bool f = 1, f1 = 0;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] > MAX)
            {
                MAX = a[i];
                maxi = i + 1;
            }
            if (a[i] > 0)
                f1 = 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
            cout << 0 << endl;
        else
        {
            vector<pair<ll, ll>> v;
            if (f1)
            {
                // while (MAX < 20)
                // {
                //     a[maxi - 1] *= 2;
                //     MAX *= 2;
                //     // cout << maxi << " " << maxi << endl;
                //     v.push_back({maxi, maxi});
                // }
                for (int i = 1; i < n; i++)
                {
                    if (a[i] < a[i - 1])
                    {
                        while (a[i] < a[i - 1])
                        {
                            if (a[i] < MAX)
                            {
                                a[i] += MAX;
                                // cout << i + 1 << " " << maxi << endl;
                                v.push_back({i + 1, maxi});
                                if (a[i] > MAX)
                                {
                                    MAX = a[i];
                                    maxi = i + 1;
                                }
                            }
                            else
                            {
                                a[i] += a[i];
                                // cout << i + 1 << " " << i + 1 << endl;
                                v.push_back({i + 1, i + 1});
                            }
                        }
                    }
                }
            }
            else
            {
                MAX = -21, maxi = 0;
                rep(i, n)
                {
                    a[i] *= -1;
                }
                rep(i, n)
                {
                    if (a[i] > MAX)
                    {
                        MAX = a[i];
                        maxi = i + 1;
                    }
                }
                for (int i = n - 2; i >= 0; i--)
                {
                    if (a[i + 1] > a[i])
                    {
                        while (a[i + 1] > a[i])
                        {
                            if (a[i] < MAX)
                            {
                                a[i] += MAX;
                                // cout << i + 1 << " " << maxi << endl;
                                v.push_back({i + 1, maxi});
                                if (a[i] > MAX)
                                {
                                    MAX = a[i];
                                    maxi = i + 1;
                                }
                            }
                            else
                            {
                                a[i] += a[i];
                                // cout << i + 1 << " " << i + 1 << endl;

                                v.push_back({i + 1, i + 1});
                            }
                        }
                    }
                }
            }
            cout << v.size() << endl;
            for (auto it : v)
                cout << it.first << " " << it.second << endl;
        }
    }

    return 0;
}