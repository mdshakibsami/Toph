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
    stack<char> sk;
    sk.push(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            sk.push('(');
        }
        else
        {
            if (sk.empty())
            {
                cout << "No" << endl;
                return 0;
            }else 
            {
                sk.pop();
            }
        }
    }
    if (sk.size() == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}