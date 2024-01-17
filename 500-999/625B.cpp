#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;
    int n, m, l, count = 0;
    n = a.size(), m = b.size();
    l = m;
    for (int i = 0; i < n; i++)
    {
        if (a.substr(i, l) == b.substr(0, m))
        {
            count++;
            i = i + l - 1;
        }
    }
    cout << count << endl;

    return 0;
}