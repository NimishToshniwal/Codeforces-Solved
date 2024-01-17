#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

bool check(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}

int main()
{

    ios::sync_with_stdio(false);

    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() != s2.size())
    {
        cout << "No" << endl;
    }
    else
    {
        bool f = 1;
        int n = s1.size();
        for (int i = 0; i < n; i++)
        {
            if (check(s1[i]) == check(s2[i]))
                continue;
            f = 0;
            break;
        }
        if (f)
            cout << "Yes" << endl;
        else
            cout << " No" << endl;
    }

    return 0;
}