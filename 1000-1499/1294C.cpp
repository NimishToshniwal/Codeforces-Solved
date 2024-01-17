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
        int n;
        cin >> n;
        set<int> s;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0 && s.count(i) == 0)
            {
                s.insert(i);
                n /= i;
                break;
            }
        }
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0 && s.count(i) == 0)
            {
                s.insert(i);
                n /= i;
                break;
            }
        }
        if (s.size() < 2 || s.count(n) != 0 || n == 1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            s.insert(n);
            for (auto it : s)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}