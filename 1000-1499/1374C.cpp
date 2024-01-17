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
        int n, count = 0, sum = 0;
        cin >> n;
        string s;
        cin >> s;
        rep(i, n)
        {
            if (s[i] == '(')
                count++;
            else
            {
                count--;
                if (count < 0)
                {
                    sum++;
                    count = 0;
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}