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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        int l[q], r[q];
        for (int i = 0; i < q; i++)
        {
            cin >> l[i] >> r[i];
        }

        for (int i = 0; i < q; i++)
        {
            bool flag = 0;
            for (int j = r[i]; j < n; j++)
            {
                if (s[j] == s[r[i] - 1])
                {
                    flag = 1;
                    cout << "YES" << endl;
                    break;
                }
            }
            if (flag == 0)
            {
                for (int j = 0; j < l[i] - 1; j++)
                {
                    if (s[j] == s[l[i] - 1])
                    {
                        flag = 1;
                        cout << "YES" << endl;
                        break;
                    }
                }
                if (flag == 0)
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}