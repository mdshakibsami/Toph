// #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define int long long
// const int MOD = 1e9+7;
// signed main()
// {
//     ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
//     int n;  cin>>n;
//     cerr<<n;
//     int tc = n;
//     vector<int>v,vv;
//     while (tc--)
//     {
//         int a,b;    cin>>a>>b;
//         v.push_back(a);
//         // vv.push_back(b);
//     }
    
//     int x = abs(v[0]-v[1]);
//     int y = abs(vv[0]-vv[1]);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             int dif = abs(v[i]-v[j]);
//             x = min(x,dif);
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             int dif = abs(vv[i]-vv[j]);
//             y = min(y,dif);
//         }
//     }
    
//     cout<<fixed<<setprecision(6)<<sqrt((x*x)+(y*y))<<endl;
// }