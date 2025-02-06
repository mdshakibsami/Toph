#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    while (a > 0 || b > 0)
    {
        int x = a % 10;
        int y = b % 10;

        a /= 10;
        b /= 10;

        int z = x + y;
        if (z > 9)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}