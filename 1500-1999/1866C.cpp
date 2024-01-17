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
        ll pos;
        cin >> s >> pos;
        ll n = s.size(), count = 0;
        while (pos > n)
        {
            pos -= n;
            n--;
            count++;
        }
        pos--;
        vector<char> st;
        rep(i, s.size())
        {
            while (!st.empty() && s[i] < st.back() && count)
            {
                st.pop_back();
                count--;
            }
            st.push_back(s[i]);
        }

        // while(!st.empty()){
        //     cout<<st.top()<<" ";
        //     st.pop();
        // }
        // cout<<endl;
        cout << st[pos];
    }

    return 0;
}