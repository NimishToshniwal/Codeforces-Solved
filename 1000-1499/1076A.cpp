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
    int idx = n - 1;
    for (int i = 0; i < idx; i++)
    {
        if (s[i] > s[i + 1])
        {
            idx = i;
            break;
        }
    }
    // cout << idx << endl;
    cout << s.substr(0, idx) + s.substr(idx + 1) << endl;

    return 0;
}