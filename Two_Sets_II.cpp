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
    ll total_sum=n*(n+1)/2;
    if(total_sum&1)
    {
         cout<<0<<endl;
         return;
    }
    ll target=total_sum/2;
    vector<vector<ll>>dp(n+1,vector<ll>(target+1,0));
    dp[0][0]=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=target; j++)
        {
            dp[i][j]=(dp[i][j]+dp[i-1][j])%M;
            if(j>=i) dp[i][j]=(dp[i][j]+dp[i-1][j-i])%M;
        }
    }
    cout<<dp[n][target]<<endl;
    // for(int i=0; i<=n; i++)
    // {
    //     for(int j=0; j<=target; j++) cout<<dp[i][j]<<" "; cout<<endl;
    // }

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