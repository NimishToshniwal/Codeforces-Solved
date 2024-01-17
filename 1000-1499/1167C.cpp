#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int p[500005], ans[500005];
int parent(int x, int p[])
{
    if(p[x]==x) return x;
    else return p[x]=parent(p[x], p);
}

int main()
{

    ios::sync_with_stdio(false);

    int n, m, x, y;
    cin >> n >> m;
    // cout<<"n = "<<n<<" m = "<<m<<endl;
    rep1(i, n) p[i] = i;
    rep1(i, m)
    {
        int k;
        cin >> k;
        if (k == 0)
            continue;
        cin >> x;
        for (int j = 2; j <= k; j++)
        {
            cin >> y;
            p[parent(x, p)] = parent(y, p);
            x = y;
        }
    }
    rep1(i, n) ans[parent(i, p)]++;
    rep1(i, n) cout << ans[parent(i, p)] << " ";

    return 0;
}