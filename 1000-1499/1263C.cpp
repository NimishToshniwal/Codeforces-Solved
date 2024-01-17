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
        vector<int> v;
        int k = (int)sqrt(n);
        rep(i, k + 1) v.push_back(i);
        // if (k * k == n)
        //     rep1(i, k - 1) v.push_back(n / i);
        // else
        rep1(i, k) v.push_back(n / i);
        sort(v.begin(), v.end());
        v.resize(unique(v.begin(), v.end()) - v.begin());
        cout << v.size() << endl;
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}