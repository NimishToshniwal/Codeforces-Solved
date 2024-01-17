#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int k, a, b, n;
    cin >> k >> a >> b;
    string s;
    cin >> s;
    n = s.size();
    if (a * k > n || b * k < n)
        cout << "No solution";
    else
    {
        int q = n / k, count = 0;
        for (int i = 0; i < k; i++)
        {
            if (i < k - 1)
            {
                for (int j = 0; j < q; j++)
                {
                    cout << s[count++];
                }
                cout << endl;
            }
            else
            {
                while (count < n)
                    cout << s[count++];
                cout << endl;
            }
        }
    }
    return 0;
}