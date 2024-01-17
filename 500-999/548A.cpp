#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    int k, n;
    cin >> s >> k;
    n = s.size();
    if (n % k != 0)
        cout << "NO" << endl;
    else
    {
        bool f = 1;
        for (int i = 0; i < n; i += (n / k))
        {
            int l = i, r = i - 1 + (n / k);
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    f = 0;
                    break;
                }
            }
            if (!f)
            {
                // cout<<"i = "<<i<<" l = "<<l<<" r = "<<r<<endl;
                cout << "NO" << endl;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
    }

    return 0;
}