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
        queue<int> q;
        int k;
        rep(i, n)
        {
            cin >> k;
            q.push(k);
            if (q.front() < q.size())
                q.pop();
            cout << q.size() << " ";
        }
        cout << endl;
    }

    return 0;
}