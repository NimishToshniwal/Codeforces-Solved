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
        string s;
        cin >> s;
        int idx1 = 0, idx0 = n - 1;
        while (idx1 < n && s[idx1] != '1')
            idx1++;
        while (idx0 >= 0 && s[idx0] != '0')
            idx0--;
        // cout<<"idx1 = "<<idx1<<" idx2 = "<<idx0<<endl;
        if (idx1 < idx0)
        {
            string ans = "";
            for (int i = 0; i < idx1; i++)
                ans += s[i];
            for (int i = idx0; i < n; i++)
                ans += s[i];
            cout << ans << endl;
        }
        else
            cout << s << endl;
    }

    return 0;
}

// 11001101
// 11.....100.....01.....10.........01111.1111110000