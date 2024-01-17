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
        int n, count = 0;
        cin >> n;
        deque<int> a(n);
        vector<int> v;
        rep(i, n) cin >> a[i];
        while (!a.empty())
        {
            count = 0;
            while (a.back() != n)
            {
                a.push_back(a.front());
                a.pop_front();
                count++;
            }
            a.pop_back();
            v.push_back(count);
            n--;
        }
        v.pop_back();
        for (int i = v.size(); i >= 0; i--)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}