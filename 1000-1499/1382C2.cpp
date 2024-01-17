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
        string a, b;
        cin >> a >> b;
        vector<int> a1, b1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
                a1.push_back(i);
        }
        if (a[n - 1] != b[n - 1])
            a1.push_back(n);
        for (int i = 1; i < n; i++)
        {
            if (b[i] != b[i - 1])
                b1.push_back(i);
        }
        reverse(b1.begin(), b1.end());
        int k = a1.size() + b1.size();
        cout << k << " ";
        for (auto it : a1)
            cout << it << " ";
        for (auto it : b1)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}