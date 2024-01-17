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
        string a = "3141592653589793238462643383279";
        int n = a.size(), count = 0;
        string s;
        cin >> s;
        int m = s.size();
        for (int i = 0; i < min(n, m); i++)
        {
            if (s[i] == a[i])
                count++;
            else
                break;
        }
        cout << count << endl;
    }
    return 0;
}