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
        ll n, m, d;
        cin >> n >> m >> d;
        ll a[n + 1], MAX = 0, sum = 0;
        priority_queue<ll> pq;
        rep1(i, n)
        {
            cin >> a[i];
            if (a[i] < 0)
                continue;
            pq.push(a[i] * (-1));
            sum += a[i];
            while (pq.size() > m)
            {
                sum += pq.top();
                pq.pop();
            }
            MAX = max(MAX, sum - i * d);
        }
        cout << MAX << endl;
    }

    return 0;
}