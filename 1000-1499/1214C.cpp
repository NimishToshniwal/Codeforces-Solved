#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n, f = 1;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        rep(i, n)
        {
            if (s[i] == '(')
                count++;
            else
                count--;
            if (count <= -2)
            {
                f = 0;
                break;
            }
        }
        if (f && count == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}