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
        rep(i, n)
        {
            cin >> a[i];
        }
        int count = 0, c1 = 0;
        vector<int> v(101, 0);
        rep(i, n)
        {
            if (a[i] == 0)
            {
                continue;
            }

            v[a[i]]++;
        }
        rep(i, 101)
        {
            if (v[i] > 1)
            {
                count += v[i];
            }
        }
        rep(i, 101)
        {
            if (v[i] == 1)
            {
                c1++;
                // cout<<"i = "<<i<<endl;
            }
        }
        // rep(i, 4){
        //     cout<<v[i]<<" ";
        // }
        if (c1 == n)
        {
            cout << c1 + 1 << endl;
            // cout<<"a"<<endl;
        }
        else
        {
            cout << count + c1 << endl;
            // cout<<"b"<<endl;
        }
    }

    return 0;
}