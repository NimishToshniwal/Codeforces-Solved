#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    string s, a;
    string b[10] = {"", "", "2", "3", "223", "5", "53", "7", "7222", "7332"};
    cin >> n >> s;
    rep(i, n)
    {
        a += b[s[i] - '0'];
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
    }
    cout << a << endl;
    return 0;
}