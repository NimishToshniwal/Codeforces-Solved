#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++)
    {
        if (n == k)
        {
            cout << s;
            break;
        }
        if (s[i] == ')')
        {
            s.erase(i - 1, 2);
            n -= 2;
            i -= 2;
        }
    }

    return 0;
}