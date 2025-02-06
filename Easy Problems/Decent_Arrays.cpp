#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int n;  cin>>n;
    vector<int>v(n),sV;
    for(int i=0;i<n;i++) cin>>v[i];

    sV=v;
    sort(sV.begin(),sV.end());

    if(sV==v) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}