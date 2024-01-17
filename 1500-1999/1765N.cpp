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
        int k;
        cin >> k;
        int n = s.size();
        int MIN = '9', idx = 0;
        rep(i, k + 1)
        {
            if (s[i] < MIN && s[i] != '0')
            {
                MIN = s[i];
                idx = i;
            }
        }
        k -= idx;
        string s1;
        for (int i = idx; i < n; i++)
        {
            while (s1.size() > 1 && k > 0 && s[i] < s1.back())
            {
                s1.pop_back();
                k--;
            }
            s1.push_back(s[i]);
            // cout<<"s1 = "<<s1<<" i = "<<i<<endl;
        }
        while (k != 0)
        {
            s1.pop_back();
            k--;
        }
        cout << s1 << endl;
    }

    return 0;
}