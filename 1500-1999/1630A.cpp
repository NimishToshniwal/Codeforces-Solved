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
        int n, k;
        cin >> n >> k;
        int a[n];
        rep(i, n) a[i]=i;
        if(k!=n-1) swap(a[k],a[0]);
        else{
            swap(a[n-2], a[0]);
            swap(a[1], a[4]);
        }
        if(n==4&&k==3) cout<<-1<<endl;
        else rep(i, n/2)cout<<a[i]<<" "<<a[n-i-1]<<endl;
    }

    return 0;
}