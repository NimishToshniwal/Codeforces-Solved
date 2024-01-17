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
    multiset<int> m1, m2;
    while (t--)
    {
        char c;
        int a, b;
        cin >> c >> a >> b;
        if (c == '+')
        {
            m1.insert(a);
            m2.insert(b);
        }
        else
        {
            m1.erase(m1.find(a));
            m2.erase(m2.find(b));
        }
        if (m1.size() && (*m1.rbegin()) > (*m2.begin()))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}