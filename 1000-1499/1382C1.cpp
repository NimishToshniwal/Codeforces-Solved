#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define rep(i,n)             for (ll i=0;i<n;i++)
#define rep1(i,n)            for(ll i=1;i<=n;i++)
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string a, b;
        cin>>a>>b;
        vector<int> v;
        rep(i, n){
            if(a[i]!=b[i]){
                v.push_back(i+1);
                v.push_back(1);
                v.push_back(i+1);
            }
        }
        cout<<v.size()<<" ";
        rep(i, v.size()) cout<<v[i]<<" ";
        cout<<endl;
    }
    

    return 0;
}