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
        int ans = n;
        int a[n + 1];
        vector<int> last(n + 1, 0);
        vector<priority_queue<int>> v(k + 1);
        rep1(i, n)
        {
            cin >> a[i];
            v[a[i]].push(i - last[a[i]] - 1);
            last[a[i]] = i;
        }
        // rep1(i, k) cout << last[i] << " ";
        // cout << endl;
        rep1(i, k) v[i].push(n - last[i]);
        // rep1(i,n){
        //     priority_queue<int> pq=v[i];
        //     cout<<"i = "<<i<<endl;
        //     while(!pq.empty()){
        //         cout<<pq.top()<<" ";
        //         pq.pop();
        //     }
        //     cout<<endl;
        // }
        rep1(i, k)
        {
            int curr = v[i].top();
            // cout<<"i = "<<i<<" curr = "<<curr<<" "<<v[i].size()<<endl;
            v[i].pop();
            v[i].push(curr / 2);
            ans = min(ans, v[i].top());
            // while(v[i].size()) v[i].pop();
        }
        cout << ans << endl;
    }

    return 0;
}