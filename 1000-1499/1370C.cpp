#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
bool check(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool f = 0;
        if (n == 1)
        {
            f = 1;
            // cout << "if" << endl;
        }
        else
        {
            // cout << "else" << endl;
            if (n > 2 && (n % 2 == 0))
            {
                // cout << "elseif" << endl;
                if ((n & (n - 1)) == 0)
                {
                    f = 1;
                    // cout<<"elseifif"<<endl;
                }
                else if (n % 4 != 0 && check(n / 2))
                {
                    // cout<<"elseifelseif"<<endl;
                    f = 1;
                }
            }
        }
        if (f)
            cout << "FastestFinger" << endl;
        else
            cout << "Ashishgup" << endl;
    }
    // cout<<(4&3);

    return 0;
}