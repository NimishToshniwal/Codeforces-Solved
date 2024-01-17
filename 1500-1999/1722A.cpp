#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s = "Timur";
    sort(s.begin(), s.end());
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        if (n != 5)
            cout << "NO" << endl;
        else
        {
            sort(a.begin(), a.end());
            if (a == s)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}