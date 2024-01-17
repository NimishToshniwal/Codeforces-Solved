#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int k = 0, n, MAX = 0;
    string s;
    vector<string> v;
    // int count=0;
    while (getline(cin, s))
    {
        // if(s=="exit") break;
        // count++;
        // cout<<"s = "<<s<<endl;
        v.push_back(s);
        k = s.size();
        MAX = max(MAX, k);
    }
    // cout<<"count = "<<count<<endl;
    n = v.size();
    int *s1 = new int[n];
    int *s2 = new int[n];
    int f = 0;
    rep(i, n)
    {
        k = MAX - v[i].size();
        if (k % 2)
        {
            s1[i] = (k / 2) + f;
            f != f;
        }
        else
            s1[i] = k / 2;
        s2[i] = k - s1[i];
    }
    rep(i, MAX + 2) cout << '*';
    cout << endl;
    rep(i, n)
    {
        cout << '*';
        rep(j, s1[i]) cout << ' ';
        cout << v[i];
        rep(j, s2[i]) cout << ' ';
        cout << '*' << endl;
    }
    rep(i, MAX + 2) cout << '*';
    cout << endl;

    return 0;
}