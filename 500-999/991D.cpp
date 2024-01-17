#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int main()
{

    ios::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;
    int n = a.size(), count = 0, remain = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = (a[i] == '0') + (b[i] == '0');
        remain += curr;
        if (remain >= 3)
        {
            count++;
            remain -= 3;
        }
        else
        {
            remain = curr;
        }
    }
    cout << count;
    // int previous = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int current = (a[i] == '0') + (b[i] == '0');
    //     if (current == 0)
    //         previous = 0;
    //     if (current == 1)
    //     {
    //         if (previous == 2)
    //         {
    //             count++;
    //             previous = 0;
    //         }
    //         else
    //             previous = 1;
    //     }
    //     if (current == 2)
    //     {
    //         if (previous > 0)
    //         {
    //             count++;
    //             if (previous == 2)
    //                 previous = 1;
    //             else
    //                 previous = 0;
    //         }
    //         else
    //             previous = 2;
    //     }
    // }
    // cout<<count;
    return 0;
}