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
        ll n;
        cin >> n;
        ll a[n], c1 = 0, c2 = 0, c0 = 0;
        vector<ll> v;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] > 0)
            {
                c1++;
            }
            if (a[i] < 0)
            {
                c2++;
            }
            if (a[i] == 0)
            {
                c0++;
                if (c0 <= 2)
                {
                    v.push_back(a[i]);
                }
            }
            else
            {
                v.push_back(a[i]);
            }
        }
        if (c1 > 2 || c2 > 2)
        {
            cout << "NO" << endl;
            // cout<<"iufhsg"<<endl;
            // cout<<"c1 = "<<c1<<"and c2 = "<<c2<<endl;
        }
        else
        {
            bool f = 1;
            for (int i = 0; i < v.size(); i++)
            {
                for (int j = i + 1; j < v.size(); j++)
                {
                    for (int k = j + 1; k < v.size(); k++)
                    {
                        f = 0;
                        ll sum = v[i] + v[j] + v[k];
                        for (ll it : v)
                        {
                            if (it == sum)
                            {
                                f = true;
                            }
                        }
                        if (!f)
                            break;
                    }
                    if (!f)
                        break;
                }
                if (!f)
                    break;
            }
            if (!f)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            // for(int i=0;i<flag.size();i++){
            //     cout<<flag[i]<<" ";
            // }
            // cout<<endl;
        }
    }

    return 0;
}