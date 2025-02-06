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
    if (n < 3)
        cout << 1 << endl;
    else
    {
        int x = 2;
        int a = 1, b = 1;
        while (true)
        {
            x++;
            int temp = a + b;
            a = b;
            b = temp;
            if (x == n)
            {
                cout << temp << endl;
                break;
            }
        }
    }
}