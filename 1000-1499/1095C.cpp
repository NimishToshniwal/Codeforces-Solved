#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
int countsetbits(int n)
{
    int count = 0;
    while (n)
    {
        if (n & 1)
        {
            count++;
        }
        n >>= 1;
    }
    return count;
}
int main()
{

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    if (k < countsetbits(n) || k > n)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        priority_queue<int> pq;
        int count = 0;
        while (n)
        {
            if (n & 1)
            {
                pq.push(1 << count);
            }
            n >>= 1;
            count++;
        }
        while (pq.size() < k)
        {
            if (pq.top() == 1)
            {
                break;
            }
            int t = pq.top();
            pq.pop();
            pq.push(t / 2);
            pq.push(t / 2);
        }
        while (!pq.empty())
        {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << endl;
    }
    return 0;
}