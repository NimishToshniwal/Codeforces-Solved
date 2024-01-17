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
        int n, k, count = 0, sum = 0, i = 0, j = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        bool f = 0;
        while (i < n && j < n)
        {
            if (s[j] == '1')
            {
                if (f)
                    sum += ((count - k) / (k + 1));
                else
                    sum += (count / (k + 1));
                i = j;
                count = 0;
                f = 1;
            }
            else if (s[j] == '0')
                count++;
            j++;
        }
        if (!f)
            sum += ((count - 1) / (k + 1)) + 1;
        else
            sum += (count / (k + 1));
        cout << sum << endl;
    }

    return 0;
}