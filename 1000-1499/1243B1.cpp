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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> v;
        rep(i, n)
        {
            if (a[i] != b[i])
                v.push_back(i);
        }
        // cout << "v.size() = " << v.size() << endl;
        // for (auto it : v)
        //     cout << it << " ";
        // cout << endl;
        if (v.size() > 2 || v.size() == 1)
            cout << "No" << endl;
        else
        {
            if (v.size() == 0)
                cout << "Yes" << endl;
            else
            {
                // swap(a[v[0]], a[v[1]]);
                // swap(b[v[1]], b[v[0]]);
                // cout<<a[v[0]]<<b[v[1]]<<a[v[1]]<<b[v[0]]<<endl;
                if ((a[v[0]] == a[v[1]]) && (b[v[1]] == b[v[0]]))
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
                // cout<<"a = "<<a<<" b = "<<b<<endl;
                // if (a == b)
                //     cout << "Yes" << endl;
                // else
                //     cout << "No" << endl;
            }
        }
    }

    return 0;
}