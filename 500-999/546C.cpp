#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n, k, x, count = 0;
    cin >> n >> k;
    queue<int> a, b;
    while (k--)
    {
        cin >> x;
        a.push(x);
    }
    cin >> k;
    while (k--)
    {
        cin >> x;
        b.push(x);
    }
    bool f = 1;
    while (a.size() && b.size())
    {
        count++;
        if (count >= 1000)
        {
            f = 0;
            break;
        }
        if (a.front() > b.front())
        {
            a.push(b.front());
            a.push(a.front());
        }
        else
        {
            b.push(a.front());
            b.push(b.front());
        }
        a.pop();
        b.pop();
    }
    if (f == 0)
        cout << -1 << endl;
    else
    {
        cout << count << " ";
        if (a.empty())
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}