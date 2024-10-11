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
vector<int> digits(int n)
{
    vector<int>tem;
    while(n)
    {
        tem.push_back(n%10);
        n/=10;
    }
    return tem;
}
int f(int n,vector<int>&dp)
{
   // check;
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int ans=INT_MAX;
    for(auto x:digits(n))
    {
        if(x!=0)
        ans=min(ans,f(n-x,dp)+1);
    }
    return dp[n]=ans;



}


void solve()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    for(int i=1; i<=9; i++) dp[i]=1;
    for(int i=10; i<=n; i++)
    {
        int dd=M;
        for(auto &x:digits(i))
        {
            if(x!=0)
            dd=min(dd,dp[i-x]);
        }
      // cout<<i<<" "<<dd+1<<endl;
        dp[i]=dd+1;
    }
    cout<<dp[n]<<endl;

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