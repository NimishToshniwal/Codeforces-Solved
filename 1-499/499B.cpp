#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    string a[m], b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
    }
    string c[n];
    for (int j = 0; j < n; j++)
    {
        cin >> c[j];
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            if (c[j] == a[i])
            {
                if (a[i].length() <= b[i].length())
                {
                    cout << a[i] << " ";
                    // cout<<"i= "<<i<<", j= "<<j;
                    break;
                }
                else
                {
                    cout << b[i] << " ";
                    // cout<<"i= "<<i<<", j= "<<j;
                    break;
                }
            }
            continue;
        }
    }

    return 0;
}