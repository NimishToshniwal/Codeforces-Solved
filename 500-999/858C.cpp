#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size(), i = 0;
    char c[] = {'a', 'e', 'i', 'o', 'u'};
    queue<int> q;
    while (1)
    {
        set<char> st;
        if (i + 2 >= n)
            break;
        st.insert(s[i]);
        st.insert(s[i + 1]);
        st.insert(s[i + 2]);
        int count = 0;
        rep(j, 5)
        {
            if (c[j] == s[i] || c[j] == s[i + 1] || c[j] == s[i + 2])
                count++;
        }
        if (count == 0 && st.size() > 1)
        {
            q.push(i + 1);
            i += 2;
        }
        else
            i++;
        // cout<<"st.size() = "<<st.size() << " i = " << i << " count = " << count << endl;
        // for(int k=0;k<st.size();k++) cout<<s[k]<<" ";
        // cout<<endl;
    }
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    rep(i, n)
    {
        cout << s[i];
        if (!q.empty())
        {
            if (i == q.front())
            {
                cout << " ";
                q.pop();
            }
        }
    }

    return 0;
}
