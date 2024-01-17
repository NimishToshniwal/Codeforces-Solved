#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> v(9);
    rep(i, 9) cin >> v[i];
    int MIN = INT_MAX, idx = 9;
    for (int i = 0; i < 9; i++)
    {
        if (v[i] <= MIN)
        {
            MIN = v[i];
            idx = i + 1;
        }
        // cout<<MIN<<" "<<idx<<endl;
    }
    int size = n / MIN, rem = n % MIN;
    string s = "";
    bool f = 1;
    // rep(i, 9) cout<<v[i]<<" ";
    // cout<<endl;
    // cout<<"MIN = "<<MIN<<endl;
    // cout<<"idx = "<<idx<<endl;
    // cout<<"rem = "<<rem<<endl;
    while (f)
    {
        f = 0;
        for (int i = 8; i >= idx; i--)
        {
            if (MIN + rem >= v[i])
            {
                s += to_string(i + 1);
                rem -= (v[i] - MIN);
                f = 1;
                size--;
                break;
            }
        }
    }
    // cout<<"rem = "<<rem<<endl;
    for (int i = 0; i < size; i++)
    {
        s += to_string(idx);
    }
    if (s.size() == 0)
        cout << -1 << endl;
    else
        cout << s << endl;

    return 0;
}