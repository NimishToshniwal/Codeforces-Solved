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
        int n;
        cin >> n;
        int a[n];
        vector<int> v(10, 0);
        rep(i, n)
        {
            cin >> a[i];
            v[a[i] % 10]++;
        }
        vector<int> v1;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < min(v[i], 3); j++)
            {
                v1.push_back(i);
            }
        }
        int b = v1.size();
        bool flag = false;
        for (int i = 0; i < b; i++)
        {
            for (int j = i + 1; j < b; j++)
            {
                for (int k = j + 1; k < b; k++)
                {
                    if ((v1[i] + v1[j] + v1[k]) % 10 == 3)
                    {
                        flag = true;
                        cout << "YES" << endl;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}