#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;
    int n, m;
    n = a.size(), m = b.size();
    if (m != n)
        cout << "NO" << endl;
    else
    {
        vector<int> v;
        rep(i, n)
        {
            if (a[i] != b[i])
                v.push_back(i);
        }
        if (v.size() != 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            swap(a[v[0]], a[v[1]]);
            if (a == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}