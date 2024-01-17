#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, sum;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(705, 0);
    for (int i = 1; i < n; i++)
    {
        sum = (s[i - 1] - 'A') * 26 + (s[i] - 'A');
        v[sum]++;
    }
    int ans = 0, idx = 0;
    for (int i = 0; i < 705; i++)
    {
        if (v[i] > ans)
        {
            ans = v[i];
            idx = i;
        }
        // if (v[i] > 0)
        //     cout << "i = " << i << " v[i] = " << v[i] << endl;
    }
    string s1 = "";
    s1 += char(idx / 26 + 'A');
    s1 += char(idx % 26 + 'A');
    cout << s1 << endl;

    return 0;
}