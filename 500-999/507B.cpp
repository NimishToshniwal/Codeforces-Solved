#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    double r, x, y, x1, y1, dist;
    cin >> r >> x >> y >> x1 >> y1;
    dist = sqrt(((x - x1) * (x - x1)) + ((y - y1) * (y - y1)));
    // cout<<"dist = "<<dist<<endl;
    cout << ceil((dist) / (2 * r));

    return 0;
}