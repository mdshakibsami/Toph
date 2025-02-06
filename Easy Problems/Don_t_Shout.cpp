#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    while (true)
    {
        string s;   cin>>s;
        if(s.empty()) break;
        else
        {
            string t = "";
            for(auto x:s)
            {
                t+=toupper(x);
            }

            if(t!=s) cout<<s<<" ";
        }
    }
    
    
}