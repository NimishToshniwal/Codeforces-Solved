#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long int x;
        cin >> n >> x;
        long long int sum = 0, min_sum, max_sum = 0, count = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            max_sum += a[i] / x;
            if (a[i] % x != 0)
                max_sum++;
        }
        min_sum = sum / x;
        if (sum % x != 0)
            min_sum++;
        cout << min_sum << " " << max_sum << endl;
    }
    return 0;
}