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
        int n, f = 0, count = 0;
        cin >> n;
        int a[n];
        rep(i, n) cin >> a[i];
        for (int i = 1; i < n; i *= 2)
        {
            for (int j = 0; j < n; j += 2 * i)
            {
                if (abs(a[j] - a[i + j]) > i)
                {
                    f = 1;
                    break;
                }
                if (a[j] > a[i + j])
                {
                    count++;
                    swap(a[j], a[i + j]);
                    // cout<<"if"<<endl;
                }
                // cout<<"count = "<<count<<endl;
            }
        }
        // rep(i, n) cout<<a[i]<<" ";
        // cout<<endl;
        if (f == 1)
            cout << -1 << endl;
        else
            cout << count << endl;
    }

    return 0;
}