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
        int a[n], b[n], al = 1e9, ar = 1e9, bl = 1e9, br = 1e9;
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        rep(i, n)
        {
            al = min(abs(a[0] - b[i]), al);
            ar = min(abs(a[n - 1] - b[i]), ar);
            bl = min(abs(a[i] - b[0]), bl);
            br = min(abs(a[i] - b[n - 1]), br);
        }
        // cout<<al<<" "<<ar<<" "<<bl<<" "<<br<<" "<<endl;
        cout << min(min(al + bl, abs(a[0] - b[0])) + min(ar + br, abs(a[n - 1] - b[n - 1])), min(al + br, abs(a[0] - b[n - 1])) + min(ar + bl, abs(a[n - 1] - b[0]))) << endl;
    }

    return 0;
}