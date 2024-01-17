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
        int n, f = 1;
        cin >> n;
        int a[n + 2], prev[n + 2], next[n + 2];
        rep1(i, n)
        {
            cin >> a[i];
            prev[i] = i - 1;
            next[i] = i + 1;
        }
        a[0] = -100, a[n + 1] = -100;
        priority_queue<pair<int, int>> pq;
        rep1(i, n) pq.push({a[i], i});
        while (!pq.empty())
        {
            auto [x, idx] = pq.top();
            pq.pop();
            if (x != 0)
            {
                if (a[prev[idx]] == x - 1 || a[prev[idx]] == x)
                {
                    next[prev[idx]] = next[idx];
                    prev[next[idx]] = prev[idx];
                }
                else if (a[next[idx]] == x - 1 || a[next[idx]] == x)
                {
                    next[prev[idx]] = next[idx];
                    prev[next[idx]] = prev[idx];
                }
                else
                {
                    f = 0;
                    break;
                }
            }
            else
            {
                if (pq.size())
                {
                    f = 0;
                    break;
                }
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}