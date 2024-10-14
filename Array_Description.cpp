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
    int n,m;
    cin>>n>>m;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,0));
    if(v[0]!=0) dp[0][v[0]-1]=1;
    else
    {
        for(int i=0; i<m; i++) dp[0][i]=1;
    }
    for(int i=1; i<n; i++)
    {
        if(v[i]!=0)
        {
            if(v[i]-1!=0) dp[i][v[i]-1] =(dp[i][v[i]-1]+dp[i-1][v[i]-2])%M;
            dp[i][v[i]-1]=(dp[i][v[i]-1]+dp[i-1][v[i]-1])%M;
            if(v[i]-1!=m-1) dp[i][v[i]-1]=(dp[i][v[i]-1]+dp[i-1][v[i]])%M;
        }
        else
        {
            for(int j=0; j<m; j++)
            {
                if(j!=0) dp[i][j]=(dp[i][j]+dp[i-1][j-1])%M;
            dp[i][j]=(dp[i][j]+dp[i-1][j])%M;
            if(j!=m-1) dp[i][j]=(dp[i][j]+dp[i-1][j+1])%M;

            }
        }
    }
//     for(int i=0; i<=n; i++)
//    {
//     for(int j=0; j<=m; j++) cout<<dp[i][j]<<" "; cout<<endl;
//    }
    if(v[n-1]!=0)
    {
        cout<<dp[n-1][v[n-1]-1]<<endl;
        return;
    }
    ll sum=0;
    for(int i=0; i<=m; i++)
    {
        sum=(sum+dp[n-1][i])%M;
    }
    cout<<sum<<endl;
    
   
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