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
        set<string> st;
        for (int i = 0; i < n - 1; i++)
        {
            string k = s.substr(i, 2);
            st.insert(k);
        }
        cout << st.size() << endl;
    }

    return 0;
}