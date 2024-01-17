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
        set<int> s;
        int k, n;
        cin >> n >> k;
        int a;
        rep(i, n)
        {
            cin >> a;
            s.insert(a);
        }
        if (k < s.size())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n * k << endl;
            for (int i = 0; i < n; i++)
            {
                for (auto it : s)
                {
                    cout << it << " ";
                }
                for (int i = 0; i < k - s.size(); i++)
                {
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}