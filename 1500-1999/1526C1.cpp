#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        sum += k;
        pq.push(k);
        while (sum < 0)
        {
            sum -= pq.top();
            pq.pop();
        }
    }
    cout << pq.size() << endl;
    return 0;
}