#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        vector<int> a(n + 1);
        rep1(i, n)
        {
            cin >> a[i];
            if (a[i] == i)
                count++;
        }
        if (count == n)
            cout << 0 << endl;
        else
        {
            int l, r;
            rep1(i, n)
            {
                if (a[i] != i)
                {
                    l = i;
                    break;
                }
            }
            for (int i = n; i >= 1; i--)
            {
                if (a[i] != i)
                {
                    r = i;
                    break;
                }
            }
            count = 0;
            for (int i = l; i <= r; i++)
            {
                if (a[i] == i)
                {
                    count = 1;
                    break;
                }
            }
            count++;
            cout << count << endl;
        }
    }

    return 0;
}