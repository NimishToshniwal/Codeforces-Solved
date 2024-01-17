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
        int n, k;
        cin >> n >> k;
        if (k % 2 == 0)
        {
            string s;
            cin >> s;
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else
        {
            vector<char> a, b;
            char c;
            rep(i, n)
            {
                cin >> c;
                if (i % 2 == 0)
                    a.push_back(c);
                else
                    b.push_back(c);
            }
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            int i = 0, j = 0;
            while (i < a.size() && j < b.size())
            {
                cout << a[i++];
                cout << b[j++];
            }
            if (i < a.size())
                cout << a[i] << endl;
            else
                cout << endl;
        }
    }

    return 0;
}