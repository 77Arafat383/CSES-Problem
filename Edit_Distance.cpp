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


int f(int i, int j, string &samp, string &str, vector<vector<int>>&dp)
{
    if(i==0 or j==0)
    {
        if(samp[i]==str[j])
        {
            return abs(j-i);
        }
        else
        {
            return abs(j-i)+1;
        }
       
    }
    if(dp[i][j]!=-1) return dp[i][j];
    if(samp[i]==str[j]) return dp[i][j]=f(i-1,j-1,samp,str,dp);
    dp[i][j]=f(i-1,j,samp,str,dp);
    dp[i][j]=min(dp[i][j],f(i,j-1,samp,str,dp));
    dp[i][j]=min(dp[i][j],f(i-1,j-1,samp,str,dp));
    return dp[i][j]+=1;

    
}


void solve()
{
    string samp,str;
    cin>>samp>>str;
    int n=samp.size();
    int m=str.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    int ans=f(n-1,m-1,samp,str,dp);
    cout<<ans<<endl;

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m; j++) cout<<dp[i][j]<<" "; cout<<endl;
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