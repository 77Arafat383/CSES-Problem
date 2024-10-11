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
    ll n,sum;
    cin>>n>>sum;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    vector<ll>dp(sum+10,M);
    dp[0]=0;
    for(int i=1; i<=sum; i++)
    {
        ll ans=M;   
        for(int j=0; j<n; j++)
        {
            if(i-v[j]>=0)
            {
                ans=min(ans,dp[i-v[j]]);
            }

        }
       // cout<<i<<" "<<ans+1<<endl;
       if(ans!=M) dp[i]=ans+1;
        
    }
    if(dp[sum]==M) dp[sum]=-1;
    cout<<dp[sum]<<endl;

    
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