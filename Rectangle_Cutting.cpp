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

ll f(ll n, ll m, vector<vector<ll>>&dp)
{
    if(n==m) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    ll ans=LLONG_MAX;
    for(int i=1; i<=n/2; i++)
    {   
        ans=min(ans,f(i,m,dp)+f(n-i,m,dp));
    }
    for(int j=1; j<=m/2; j++)
    {
        ans=min(ans,f(n,m-j,dp)+f(n,j,dp));
    }
   return dp[n][m]=ans+1;
}


void solve()
{
    ll n,m;
    cin>>n>>m;
   vector<vector<ll>>dp(n+1,vector<ll>(m+1,-1));
   ll ans=f(n,m,dp);
   cout<<ans<<endl;

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