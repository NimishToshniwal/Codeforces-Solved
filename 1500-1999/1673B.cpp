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
        int n = s.size();
        set<char> st;
        bool f = 1;
        int k;
        for (k = 0; k < n; k++)
        {
            if (st.find(s[k]) == st.end())
            {
                st.insert(s[k]);
            }
            else
            {
                break;
            }
        }
        for (int i = k; i < n; i++)
        {
            if (s[i] != s[i - k])
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}