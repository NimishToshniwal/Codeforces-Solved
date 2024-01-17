#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    string a, b;
    cin >> n;
    cin >> a;
    for (int i = 1; i < n; i++)
    {
        cin >> b;
        for (int j = 0; j < b.size(); j++)
        {
            if (b[j] != '?' && a[j] == '?' && a[j] != '@')
                a[j] = b[j];
            else if (b[j] != '?' && a[j] != '?' && b[j] != a[j])
                a[j] = '@';
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '@')
            a[i] = '?';
        else if (a[i] == '?')
            a[i] = 'x';
    }
    cout << a;

    return 0;
}