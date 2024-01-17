#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int count = s.size();
    vector<int> v(5, 0);

    while (count >= 0)
    {
        if (s[count - 1] == 'o')
        {
            v[0] = 1;
            count--;
            break;
        }
        count--;
    }
    // cout<<count<<endl;
    while (count >= 0)
    {
        if (s[count - 1] == 'l')
        {
            v[1] = 1;
            count--;
            break;
        }
        count--;
    }
    // cout<<count<<endl;
    while (count >= 0)
    {
        if (s[count - 1] == 'l')
        {
            v[2] = 1;
            count--;
            break;
        }
        count--;
    }
    // cout<<count<<endl;
    while (count >= 0)
    {
        if (s[count - 1] == 'e')
        {
            v[3] = 1;
            count--;
            break;
        }
        count--;
    }
    // cout<<count<<endl;
    while (count >= 0)
    {
        if (s[count - 1] == 'h')
        {
            v[4] = 1;
            count--;
            break;
        }
        count--;
    }
    // cout<<count<<endl;
    bool flag = 1;
    for (int i = 0; i < 5; i++)
    {
        if (v[i] == 1)
        {
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}