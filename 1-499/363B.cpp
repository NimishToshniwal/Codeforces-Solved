#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    vector<int> sum(n-k+1, 0);
    for (int i = 0; i < k; i++)
    {
        sum[0]+=h[i];
    }
    for (int i = 1; i < n-k+1; i++)
    {
        sum[i]=sum[i-1]+h[k+i-1]-h[i-1];
    }
    int MIN=INT_MAX, MINi;
    for (int i = 0; i < n-k+1; i++)
    {
        if (MIN>sum[i])
        {
            MIN=sum[i];
            MINi=i;
        }
        continue;
        // cout<<sum[i]<<" ";
    }
    cout<<MINi+1;
    
    return 0;
}