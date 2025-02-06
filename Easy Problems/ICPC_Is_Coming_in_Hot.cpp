#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    string s;   cin>>s;
    map<char,int>mp;
    for(auto x:s)
    {
        mp[x]++;
    }

     char c;
     int mx = 0;
     for(auto x:mp)
     {
        if(x.second>=mx)
        {
            mx = x.second;
            c = x.first;
        }
     }
     
     for(auto x:mp)
     {
        if(x.second == mx) 
        {
            cout<<x.first<<endl;
            break;
        }
     }


}