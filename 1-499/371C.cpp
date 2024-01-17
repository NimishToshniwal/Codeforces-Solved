// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define rep(i, n) for (ll i = 0; i < n; i++)
// #define rep1(i, n) for (ll i = 1; i <= n; i++)
// int main()
// {

//     ios::sync_with_stdio(false);

//     string s;
//     cin >> s;
//     int nb, ns, nc, pb, ps, pc, n, cb = 0, cs = 0, cc = 0, MIN;
//     n = s.length();
//     rep(i, n)
//     {
//         if (s[i] == 'B')
//         {
//             cb++;
//         }
//         else if (s[i] == 'S')
//         {
//             cs++;
//         }
//         else
//         {
//             cc++;
//         }
//     }

//     cin >> nb >> ns >> nc >> pb >> ps >> pc;
//     ll r, total, totaln;
//     cin >> r;

//     MIN = min((nb / cb), min((ns / cs), (nc / cc)));
//     nb -= MIN * cb;
//     ns -= MIN * cs;
//     nc -= MIN * cc;
//     totaln = ((cb - nb) * pb) + ((cs - ns) * ps) + ((cc - nc) * pc);
//     total = cb * pb + cs * ps + cc * pc;
//     r -= totaln;
//     if (r < 0)
//     {
//         cout << MIN;
//     }
//     else
//     {
//         cout << MIN + 1 + (r / total);
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
string sw;
ll pb, ps, pc, nb, ns, nc, r;
ll cb, cs, cc;
bool totaln(ll need)
{
    ll needb = max(need * cb - nb, 0LL), needs = max(0LL, need * cs - ns), needc = max(0LL, need * cc - nc);
    ll total = needb * pb + needs * ps + needc * pc;
    return total <= r;
}
int main()
{
    cin >> sw >> nb >> ns >> nc >> pb >> ps >> pc >> r;

    for (auto c : sw)
    {
        if (c == 'B')
            cb++;
        else if (c == 'S')
            cs++;
        else
            cc++;
    }

    ll l = 0, r = 1e15;
    while ((r - l) > 1)
    {
        ll m = l + (r - l) / 2;
        if (totaln(m))
            l = m;
        else
            r = m - 1;
    }
    if (totaln(r))
        cout << r;
    else
        cout << l;
    return 0;
}