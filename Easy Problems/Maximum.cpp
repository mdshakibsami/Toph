#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    
    int mx = 0;
    while (tc--)
    {
        
        int x; cin>>x;
        mx = max(x,mx);
    }
    cout<<mx<<endl;
    
}