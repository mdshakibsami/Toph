#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    string s,t; cin>>s>>t;

    if(s.size()==t.size())
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;

    
}