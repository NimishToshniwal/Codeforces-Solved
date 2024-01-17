#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size(), count = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            count++;
    }
    if (count <= 1)
    {
        if (count == 1)
            cout << "YES" << endl;
        else
        {
            if (n % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    else
        cout << "NO" << endl;

    return 0;
}