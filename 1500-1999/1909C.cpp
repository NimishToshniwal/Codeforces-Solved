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
        ll n, sum = 0;
        cin >> n;
        ll l[n], r[n], c[n], d[n];
        rep(i, n) cin >> l[i];
        rep(i, n) cin >> r[i];
        rep(i, n) cin >> c[i];
        sort(l, l + n);
        sort(r, r + n);
        sort(c, c + n);
        ll j = 0;
        stack<int> st;
        rep(i, n)
        {
            while (j < n && l[j] < r[i])
            {
                st.push(l[j++]);
            }
            d[i] = r[i] - st.top();
            st.pop();
        }
        sort(d, d + n);
        rep(i, n) sum += (d[i] * c[n - i - 1]);
        cout << sum << endl;
    }

    return 0;
}

// 1 2 5 20
// 3 4 10 30
// 3 3 2 2
// 6 6 10 20
// 81217 81570 20439 46555 23390
// 160683 176054 160994 97805 184462
// 9 3 1 8 4
//