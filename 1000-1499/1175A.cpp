#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, count;
        cin >> n >> k;
        count = 0;
        while (n > 0)
        {
            if (n % k == 0)
            {
                n /= k;
                count++;
            }
            else
            {
                count += (n % k);
                n -= n % k;
            }
        }
        cout << count << endl;
    }

    return 0;
}