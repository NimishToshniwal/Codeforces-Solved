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
        string a = "";
        bool f = 0;
        int i = n - 1;
        for (; i > 0; i--)
        {
            int total = (s[i] - '0') + (s[i - 1] - '0');
            if (total >= 10)
            {
                // cout<<"total = "<<total<<endl;
                string s1 = to_string(total);
                // cout<<"s1 = "<<s1<<endl;
                reverse(s1.begin(), s1.end());
                // cout<<"s1 = "<<s1<<endl;
                a += s1;
                // cout<<"a = "<<a<<endl;
                f = 1;
                break;
            }
            else
            {
                a += s[i];
            }
        }
        // cout<<"f ="<<f<<endl;
        if (!f)
        {
            int total = s[0] - '0' + s[1] - '0';
            string s1 = to_string(total);
            a = s1;
            for (int i = 2; i < n; i++)
                a += s[i];
        }
        else
        {
            i -= 2;
            while (i >= 0)
            {
                a += s[i];
                i--;
            }
            reverse(a.begin(), a.end());
        }
        cout << a << endl;
    }

    return 0;
}