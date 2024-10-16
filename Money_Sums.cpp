//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;




void solve()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    ll sum=accumulate(v.begin(),v.end(),0LL);
    vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
    dp[0][0]=1;
    for(int i=1; i<=n; i++) dp[i][v[i]]=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=sum; j++)
        {
            dp[i][j]=dp[i-1][j]; //j sum ta already hobe take o collect korbo... 
            if(j>=v[i] and dp[i-1][j-v[i]]) dp[i][j]=1;
        }
    }
    //  for(int i=0; i<=n; i++)
    //  {
    //     for(int j=0; j<=sum;j++) cout<<dp[i][j]<<" "; cout<<endl;
    //  }
    set<ll>ans;
    for(int i=1; i<=sum; i++)
    {
        if(dp[n][i]) ans.insert(i);
    }
   cout<<ans.size()<<endl;
   printv(ans);
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}