#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << "Yes";
    }
    else
    {
        vector<int> v(26, 0);

        for (int i = 0; i < n; i++)
        {
            v[s[i] - 97]++;
        }
        bool flag = 0;
        rep(i, 26)
        {
            if (v[i] >= 2)
            {
                cout << "Yes";
                flag = 1;
                break;
            }
            continue;
        }
        if (flag == 0)
        {
            cout << "NO";
        }
    }
    return 0;
}