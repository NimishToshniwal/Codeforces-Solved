#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)

string numtostring(long column)
{
    int x = 26;
    string y = "";
    while (column > 0)
    {
        char z = 'Z';
        long rem = column % x;
        if (rem > 0)
        {
            z = 'A' + rem - 1;
        }
        else
        {
            column -= x;
        }
        column /= x;
        y += z;
        // cout<<"z = "<<z<<" y = "<<y<<endl;
    }
    reverse(y.begin(), y.end());
    return y;
}

long stringtonum(string row)
{
    int x = 26;
    long y = 0;
    for (int i = 0; i < row.size(); i++)
    {
        y = x * y + (row[i] - 'A' + 1);
    }
    return y;
}

int main()
{

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        bool f = 0;
        if (s[0] == 'R' && ('0' <= s[1] && s[1] <= '9') && s.find('C') < s.size() - 1)
            f = 1;
        if (f)
        {
            int c = s.find('C');
            string row = s.substr(1, c - 1), col = s.substr(c + 1);
            long column = atol(col.c_str());
            cout << numtostring(column) << row << endl;
        }
        else
        {
            string row = "", col = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    col = s.substr(i);
                    break;
                }
                else
                {
                    row += s[i];
                }
            }
            // cout<<"col = "<<col<<" row = "<<row<<endl;
            cout << "R" << col << "C" << stringtonum(row) << endl;
        }
    }

    return 0;
}