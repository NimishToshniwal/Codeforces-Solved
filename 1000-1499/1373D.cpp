#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

ll maxsubbarrsum(vector<int> &v)
{
    ll a = INT_MIN, b = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        a = max((ll)v[i], a + (ll)v[i]);
        b = max(b, a);
        // cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    return b;
}

int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, even = 0;
        cin >> n;
        vector<int> v(n), e, o;
        rep(i, n)
        {
            cin >> v[i];
            if (i % 2 == 0)
                even += (ll)v[i];
        }
        for (int i = 0; i < n - 1; i += 2)
            e.push_back(v[i + 1] - v[i]);
        for (int i = 1; i < n - 1; i += 2)
            o.push_back(v[i] - v[i + 1]);
        ll emax = maxsubbarrsum(e);
        ll omax = maxsubbarrsum(o);
        // if(emax<0||omax<0) cout<<even<<endl;
        // else cout<<even+max(emax, omax)<<endl;
        cout << even + max(0ll, max(emax, omax)) << endl;
        ;
    }

    return 0;
}