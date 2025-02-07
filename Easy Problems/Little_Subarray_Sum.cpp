#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int n,l,r; cin>>n>>l>>r;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int ans = 0;
    for(int i=l;i<=r;i++)
    {
        ans+=v[i];
    }
    cout<<ans<<endl;
}