// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define rep(i, n) for (ll i = 0; i < n; i++)
// #define rep1(i, n) for (ll i = 1; i <= n; i++)

// int solve(int n, vector<int> &v)
// {
//     if (n == 0)
//         return v[0];
//     if (n == 1)
//         return max(v[0] + v[1], -1 * (v[0] + v[1]));
//     else
//         return solve(n - 1, v);
// }

// int main()
// {

//     ios::sync_with_stdio(false);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, sum = 0, a1, a2, a3, a4;
//         cin >> n;
//         vector<int> a(n), v(n);
//         rep(i, n)
//         {
//             cin >> a[i];
//             sum += a[i];
//         }
//         v = a, a1 = sum, a2 = sum, a3=sum, a4=sum;
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (a[i] + a[i + 1] < (-1 * (a[i] + a[i + 1])))
//             {
//                 a1 += ((-1 * (a[i] + a[i + 1])) - (a[i] + a[i + 1]));
//                 a[i] *= (-1);
//                 a[i + 1] *= (-1);
//             }
//         }
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (a[i] + a[i + 1] <= (-1 * (a[i] + a[i + 1])))
//             {
//                 a3 += ((-1 * (a[i] + a[i + 1])) - (a[i] + a[i + 1]));
//                 a[i] *= (-1);
//                 a[i + 1] *= (-1);
//             }
//         }
//         for (int i = n - 1; i > 0; i--)
//         {
//             if (v[i] + v[i - 1] < (-1 * (v[i] + v[i - 1])))
//             {
//                 a2 += ((-1 * (v[i] + v[i - 1])) - (v[i] + v[i - 1]));
//                 v[i] *= -1;
//                 v[i - 1] *= -1;
//             }
//         }
//         for (int i = n - 1; i > 0; i--)
//         {
//             if (v[i] + v[i - 1] <= (-1 * (v[i] + v[i - 1])))
//             {
//                 a4 += ((-1 * (v[i] + v[i - 1])) - (v[i] + v[i - 1]));
//                 v[i] *= -1;
//                 v[i - 1] *= -1;
//             }
//         }
//         cout << max(sum, max(a1, max(a2, max(a3, a4)))) << endl;
//     }

//     return 0;
// }

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
        ll n, sum = 0, MIN = INT_MAX, c = 0;
        cin >> n;
        vector<ll> v(n);
        rep(i, n)
        {
            cin >> v[i];
            sum += abs(v[i]);
            MIN = min(MIN, abs(v[i]));
            if (v[i] < 0)
                c++;
        }
        if (c % 2 == 0)
        {
            // cout<<"if"<<endl;
            cout << sum << endl;
        }
        else
        {
            cout << sum - 2 * MIN << endl;
        }
    }

    return 0;
}