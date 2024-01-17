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
        int count = 0, n = s.size();
        rep(i, n)
        {
            if (count && s[i] == 'B')
                count--;
            else
                count++;
        }
        cout << count << endl;
    }

    return 0;
}