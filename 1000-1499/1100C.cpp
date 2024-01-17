#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

const double pi = 2 * acos(0.0);

int main()
{

    ios::sync_with_stdio(false);

    double n, r, R, k;
    cin >> n >> r;
    double cosine = cos(2 * pi / n);
    k = sqrt((1 - cosine) / 2);
    cout << fixed << setprecision(12) << r * k / (1 - k);

    return 0;
}