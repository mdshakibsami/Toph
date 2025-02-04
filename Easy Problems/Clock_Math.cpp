#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int h,m;    cin>>h>>m;
    int hm = m/5;
    int lm = m%5;
    int adif = abs(h-hm);
    float ans = adif*30;
    ans+=(m*0.5);
    ans-=(lm*6);
    
    ans = min(ans,(360-ans));
    cout<<fixed<<setprecision(7)<<ans;
}