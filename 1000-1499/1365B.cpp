#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

bool check(vector<int> &a, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
            return false;
    }
    return true;
}

int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int c = 0, d = 0;
        rep(i, n)
        {
            cin >> a[i];
        }
        rep(i, n)
        {
            cin >> b[i];
            if (b[i])
                c = 1;
            else
                d = 1;
        }
        if (c && d)
            cout << "YES" << endl;
        else if (check(a, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}