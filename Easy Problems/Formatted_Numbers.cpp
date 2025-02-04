#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    if (s.size() < 4)
        cout << s << endl;
    else
    {
        int x = s.size() % 3;
        for (int i = 0; i < x; i++)
        {
            cout << s[i];
        }
        if (x != 0)
            cout << ",";
        int count = 0;
        for (int i = x; i < s.size(); i++)
        {
            count++;
            cout << s[i];
            if (count % 3 == 0 && i != s.size() - 1)
                cout << ",";
        }
    }
}