#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int k, n, m, x, y, c;
// do not use count variable as global beacuse the line using namespace std brings all the names from <algorithm> which also has a function called count, and in your code, you've declared a variable count. Hence the ambiguous error.
char a[11][11][11];
void dfs(int d, int x, int y)
{
    if (a[d][x][y] == '#' || d < 0 || x < 0 || y < 0 || d >= k || x >= n || y >= m)
    {
        return;
    }
    a[d][x][y] = '#';
    c++;
    dfs(d - 1, x, y);
    dfs(d + 1, x, y);
    dfs(d, x - 1, y);
    dfs(d, x + 1, y);
    dfs(d, x, y - 1);
    dfs(d, x, y + 1);
}

int main()
{

    ios::sync_with_stdio(false);
    cin >> k >> n >> m;
    rep(i, k)
    {
        rep(j, n)
        {
            rep(l, m)
            {
                cin >> a[i][j][l];
            }
        }
    }
    cin >> x >> y;
    dfs(0, x - 1, y - 1);
    cout << c << endl;

    return 0;
}