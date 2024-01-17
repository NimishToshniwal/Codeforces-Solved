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
    while(t--){
        int n, c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='+') c++;
            else c--;
        }
        cout<< abs(c)<<endl;
    }

    return 0;
}