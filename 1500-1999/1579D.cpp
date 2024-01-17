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
        int a[n];
        priority_queue<pair<int, int>> pq;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] > 0)
                pq.push({a[i], i + 1});
        }
        vector<pair<int, int>> v;
        while (pq.size() >= 2)
        {
            auto it1 = pq.top();
            pq.pop();
            auto it2 = pq.top();
            pq.pop();
            v.push_back({it1.second, it2.second});
            it1.first--;
            it2.first--;
            if (it1.first)
                pq.push(it1);
            if (it2.first)
                pq.push(it2);
        }
        cout << v.size() << endl;
        for (auto it : v)
        {
            cout << it.first << " " << it.second << endl;
        }
    }

    return 0;
}