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
        string s;
        cin >> s;
        int count[4] = {}, n = s.size();
        int l = 0, MIN = 1e6;
        for (int i = 0; i < n; i++)
        {
            int num = s[i] - '0';
            count[num]++;
            while (count[s[l] - '0'] > 1)
            {
                count[s[l] - '0']--;
                l++;
            }
            if (count[1] && count[2] && count[3])
                MIN = min(MIN, i - l + 1);
            // cout<<"MIN = "<<MIN<<" i = "<<i<<" l = "<<l<<endl;
        }
        if (MIN == 1e6)
            MIN = 0;
        cout << MIN << endl;
    }
    return 0;
}