#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> c1(n, 0), c0(n, 0), v(n);
    if (s[0] == '0')
    {
        c0[0] = 1;
    }
    else
    {
        c1[0] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0')
        {
            c0[i] = c0[i - 1] + 1;
        }
        else
        {
            c0[i] = c0[i - 1];
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            c1[i] = c1[i - 1] + 1;
        }
        else
        {
            c1[i] = c1[i - 1];
        }
    }
    rep(i, n)
    {
        v[i] = c0[i] - c1[i];
    }
    // rep(i, n){
    //     cout<<c0[i]<<" ";
    // }
    // cout<<endl;
    // rep(i, n){
    //     cout<<c1[i]<<" ";
    // }
    // cout<<endl;
    // rep(i, n){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    unordered_map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(v[i]) != mp.end())
        {
            ans = max(ans, i - mp[v[i]]);
            // cout << "i = " << i << " ans = " << ans << endl;
        }
        else
            mp[v[i]] = i;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 0)
        {
            if (i + 1 > ans)
            {
                ans = i + 1;
                break;
            }
        }
    }
    // for(auto it:mp){
    //     if(it.second[it.second.size()-1]-it.second[0]>ans){
    //         ans=it.second[it.second.size()-1]-it.second[0];
    //         cout<<"it = "<<it.first<<endl;
    //     }

    // }
    cout << ans;
    return 0;
}