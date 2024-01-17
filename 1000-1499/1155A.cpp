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
    for (int i = 1; i < n; i++)
    {
        if (s[i] - 'a' < s[i - 1] - 'a')
        {
            cout << "YES" << endl
                 << i << " " << i + 1 << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}