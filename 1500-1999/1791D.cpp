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
        ll n, c0, c1 = 0, idx = 0, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a(26, 0), b(26, 0);
        c0 = 1;
        a[s[0] - 'a']++;
        for (int i = 1; i < n; i++)
            b[s[i] - 'a']++;
        for (int i = 0; i < 26; i++)
        {
            if (b[i] >= 1)
                c1++;
        }
        ans = c0 + c1;
        // cout<<"ans = "<<ans<<endl;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[s[i] - 'a'] == 0)
            {
                c0++;
            }
            if (b[s[i] - 'a'] == 1)
            {
                c1--;
            }
            a[s[i] - 'a']++;
            b[s[i] - 'a']--;
            // cout<<"c0 = "<<c0<<" c1 = "<<c1;
            // cout<<" i = "<<i<<" ans = "<<ans<<endl;
            ans = max(ans, c0 + c1);
        }
        cout << ans << endl;
    }

    return 0;
}