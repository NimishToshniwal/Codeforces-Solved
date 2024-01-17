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
        int idx = s.size();
        for (int i = s.size() - 1; i; i--)
        {
            if (s[i] >= '5')
            {
                s[i - 1]++;
                idx = i;
            }
        }
        // cout<<"idx = "<<idx<<endl;
        if (s[0] >= '5')
        {
            cout << '1';
            idx = 0;
        }
        for (int i = idx; i < s.size(); i++)
            s[i] = '0';
        cout << s << endl;
    }

    return 0;
}