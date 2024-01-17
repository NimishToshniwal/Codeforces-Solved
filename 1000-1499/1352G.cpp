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
        int n, i;
        cin >> n;
        vector<int> v;
        if (n < 4)
            cout << -1 << endl;
        else if (n % 2 == 1)
        {
            i = n;
            while (i != 1)
            {
                v.push_back(i);
                i -= 2;
            }
            v.push_back(1);
            v.push_back(4);
            v.push_back(2);
            for (int i = 6; i <= n; i += 2)
            {
                v.push_back(i);
            }
            rep(i, v.size()) cout << v[i] << " ";
            cout << endl;
        }
        else
        {
            i = n - 1;
            while (i != 1)
            {
                v.push_back(i);
                i -= 2;
            }
            v.push_back(1);
            v.push_back(4);
            v.push_back(2);
            for (int i = 6; i <= n; i += 2)
            {
                v.push_back(i);
            }
            rep(i, v.size()) cout << v[i] << " ";
            cout << endl;
        }
    }

    return 0;
}