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
    int n = s.length();
    char a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = s[i];
    }
    vector<int> v;
    for (int i = 0; i < n; i += 2)
    {
        v.push_back(s[i] - '0');
    }
    sort(v.begin(), v.end());
    cout << v[0];
    for (int i = 1; i < v.size(); i++)
    {
        cout << "+" << v[i];
    }

    return 0;
}