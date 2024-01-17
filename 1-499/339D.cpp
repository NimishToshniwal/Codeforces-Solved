// First question done using the concept of segment trees

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

int MAX = 1e7, idx, val;
vector<int> a(MAX), st(MAX);

void buildTree(int s, int e, int op, int temp)
{
    if (s == e)
    {
        st[temp] = a[s];
        return;
    }
    int m = s + (e - s) / 2;
    buildTree(s, m, !op, 2 * temp + 1);
    buildTree(m + 1, e, !op, 2 * temp + 2);
    if (op == 0)
        st[temp] = (st[2 * temp + 1] | st[2 * temp + 2]);
    else
        st[temp] = (st[2 * temp + 1] ^ st[2 * temp + 2]);
}

void updateTree(int s, int e, int op, int temp)
{
    if (s == e && s == idx)
    {
        a[idx] = val;
        st[temp] = a[idx];
        return;
    }
    else if (s == e && s != idx)
    {
        return;
    }
    int m = s + (e - s) / 2;
    if (idx >= s && idx <= m)
        updateTree(s, m, !op, 2 * temp + 1);
    else
        updateTree(m + 1, e, !op, 2 * temp + 2);
    if (op == 0)
        st[temp] = (st[2 * temp + 1] | st[2 * temp + 2]);
    else
        st[temp] = (st[2 * temp + 1] ^ st[2 * temp + 2]);
}

int main()
{

    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    n = pow(2, n);
    a.resize(n);
    st.resize(2 * n);
    rep(i, n) cin >> a[i];
    int op, h = (int)ceil(log2(n));
    if (h % 2 == 0)
        op = 1;
    else
        op = 0;
    buildTree(0, n - 1, op, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> idx >> val;
        idx--;
        updateTree(0, n - 1, op, 0);
        cout << st[0] << endl;
    }
    return 0;
}