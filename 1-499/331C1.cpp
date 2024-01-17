#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        int c = n;
        vector<int> v;
        while (c > 0)
        {
            int k = c % 10;
            v.push_back(k);
            c /= 10;
        }
        int MAX = *max_element(v.begin(), v.end());
        n -= MAX;
        count++;
    }
    cout << count;

    return 0;
}