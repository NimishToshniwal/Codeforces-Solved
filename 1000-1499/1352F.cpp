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
        int n0, n1, n2;
        cin >> n0 >> n1 >> n2;
        if (n1 == 0)
        {
            if (n0 != 0)
                for (int i = 0; i <= n0; i++)
                    cout << 0;
            else
                for (int i = 0; i <= n2; i++)
                    cout << 1;
            cout << endl;
        }
        else
        {
            string s = "";
            rep(i, n1 + 1)
            {
                if (i % 2)
                    s += '0';
                else
                    s += '1';
            }
            s.insert(1, string(n0, '0'));
            s.insert(0, string(n2, '1'));
            cout << s << endl;
        }
    }

    return 0;
}