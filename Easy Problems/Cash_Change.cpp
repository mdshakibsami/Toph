#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int n;  cin>>n;
    vector<int>v;
    while (n>0)
    {
        if(n==1)
        {
            v.push_back(1);
            break;
        }
        else if(n>=500)
        {
            v.push_back(500);
            n-=500;
        }
        else if(n>=100)
        {
            v.push_back(100);
            n-=100;
        }
        else if(n>=50)
        {
            v.push_back(50);
            n-=50;
        }
        else if(n>=10)
        {
            v.push_back(10);
            n-=10;
        }
        else if(n>=5)
        {
            v.push_back(5);
            n-=5;
        }
    }
    sort(v.begin(),v.end());
    for(auto x:v) cout<<x<<" ";
    
}