#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t;
    for (int r = -n; r <= n; r++)
    {
        t = n - abs(r);
        for (int i = 0; i < abs(r); ++i)
        {
            cout << "  ";
        }
        for (int i = 0; i < t; ++i)
        {
            cout << i << " ";
        }
        for (int i = t; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
    }
    return 0;
}