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


int f(int x, int y,int n, vector<vector<char>>&grid,vector<vector<int>>&dp)
{
    
    if(x==n-1 and y==n-1 and grid[x][y]!='*') return 1;
    if(x==n or y==n) return 0;
    if(grid[x][y]=='*') return 0;
    if(dp[x][y]!=-1) return dp[x][y];
    int ans=0;
    ans=(ans+f(x+1,y,n,grid,dp))%M;
    ans=(ans+f(x,y+1,n,grid,dp))%M;
    return dp[x][y]=ans;

}

void solve()
{
    int n;
    cin>>n;
    vector<vector<char>>grid(n,vector<char>(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) cin>>grid[i][j];
    }
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    cout<<f(0,0,n,grid,dp)<<endl;

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