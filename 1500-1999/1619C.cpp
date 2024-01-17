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
        ll a, s;
        cin >> a >> s;
        vector<int> b;
        bool f = 1;
        while (s > 0)
        {
            int x = a % 10;
            int y = s % 10;
            if (x <= y)
                b.emplace_back(y - x);
            else
            {
                s /= 10;
                y += 10 * (s % 10);
                if (x < y && y >= 10 && y <= 19)
                    b.emplace_back(y - x);
                else
                {
                    f = 0;
                    break;
                }
            }
            if (f == 0)
                break;
            a /= 10;
            s /= 10;
        }
        if (f == 0)
            cout << -1 << endl;
        else
        {
            if (a)
                cout << -1 << endl;
            else
            {
                while (b.back() == 0)
                    b.pop_back();
                for (int i = b.size() - 1; i >= 0; i--)
                    cout << b[i];
                cout << endl;
            }
        }
    }

    return 0;
}