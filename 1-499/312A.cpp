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
    char ch[105];
    cin.getline(ch, 105);
    string s;
    while (t--)
    {
        cin.getline(ch, 105);
        s.assign(ch);
        if (s.size() >= 5)
        {
            if (s.substr(s.size() - 5, 5) == "lala.")
            {
                if (s.substr(0, 5) == "miao.")
                {
                    cout << "OMG>.< I don't know!" << endl;
                }
                else
                {
                    cout << "Freda's" << endl;
                }
            }
            else
            {
                if (s.substr(0, 5) == "miao.")
                {
                    cout << "Rainbow's" << endl;
                }
                else
                {
                    cout << "OMG>.< I don't know!" << endl;
                }
            }
        }
        else
        {
            cout << "OMG>.< I don't know!" << endl;
        }
    }

    return 0;
}