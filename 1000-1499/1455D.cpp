#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

bool check(vector<int> a, int n)
{
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            return 0;
    return 1;
}

int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        rep(i, n)
        {
            cin >> a[i];
        }
        if (check(a, n))
            cout << 0 << endl;
        else
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > x)
                {
                    swap(a[i], x);
                    count++;
                }
                if (check(a, n))
                    break;
            }
            if (check(a, n))
                cout << count << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}