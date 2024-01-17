#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
vector<int> v;
void solve(int x)
{
    if (x % 3 == 0)
    {
        v.push_back(x / 3);
        v.push_back(2 * x / 3);
        solve(x / 3);
        solve(2 * x / 3);
    }
}
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        v.clear();
        int n, m;
        cin >> n >> m;
        if (n == m)
            cout << "YES" << endl;
        else
        {
            solve(n);
            bool f = 0;
            int k = v.size();
            for (int i = 0; i < k; i++)
            {
                if (v[i] == m)
                {
                    f = 1;
                    break;
                }
            }
            // rep(i, k) cout << v[i] << " ";
            // cout << endl;
            if (f)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}