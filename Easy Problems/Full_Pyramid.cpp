#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int j = n - 1 - row; j > 0; j--)
        {
            cout << ' ';
        }
        for (int j = 0; j <= row; j++)
        {
            if (j == row)
                cout << "*";
            else
                cout << "* ";
        }
        cout << endl;
    }
}