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
        vector<string> v(8);
        bool f = 0;
        for (int i = 0; i < 8; i++)
        {
            cin >> v[i];
            if (v[i] == "RRRRRRRR")
                f = 1;
        }
        if (f)
            cout << "R" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}