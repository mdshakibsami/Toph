#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    string s;   cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i==0)
        {
            cout<<(char)toupper(s[i]);
        }
        else if(s[i]=='s') cout<<'$';
        else if(s[i]=='i') cout<<'!';
        else if(s[i]=='o') cout<<"()";
        else cout<<s[i];
    }
    cout<<'.';
}