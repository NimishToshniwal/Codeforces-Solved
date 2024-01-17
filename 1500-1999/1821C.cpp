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
        int b = 0, c = 0, MIN = INT_MAX;
        rep(i, 26)
        {
            char ch = i + 'a';
            b = 0, c = 0;
            rep(j, s.size())
            {
                if (s[j] != ch)
                {
                    c++;
                    b = max(b, c);
                }
                else
                    c = 0;
            }
            int k = 0;
            while (b)
            {
                b /= 2;
                k++;
            }
            MIN = min(MIN, k);
        }
        cout << MIN << endl;
    }

    return 0;
}