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
        int n, k, a;
        cin >> n;
        unordered_set<int> s;
        vector<int> v[n + 1];
        int b = -1;
        for (int i = 1; i <= n; i++)
        {
            cin >> k;
            bool flag = 1;
            for (int j = 1; j <= k; j++)
            {
                cin >> a;
                v[i].push_back(a);
            }
            for (int j = 0; j < k; j++)
            {
                if (s.find(v[i][j]) == s.end())
                {
                    flag = 0;
                    s.insert(v[i][j]);
                    break;
                }
            }
            if (flag)
            {
                b = i;
            }
        }
        if (s.size() == n)
        {
            cout << "OPTIMAL" << endl;
        }
        else
        {
            cout << "IMPROVE" << endl;
            for (int i = 1; i <= n; i++)
            {
                if (s.find(i) == s.end())
                {
                    cout << b << " " << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}