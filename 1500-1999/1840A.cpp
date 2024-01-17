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
        vector<int> v(26, 0);
        int i = 0, j = 1;
        while (j < n)
        {
            if (s[i] == s[j])
            {
                cout << s[i];
                i = j + 1;
                j = i + 1;
            }
            else
                j++;
        }
        cout << endl;
    }

    return 0;
}