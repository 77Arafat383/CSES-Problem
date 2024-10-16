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
    string str;
    cin>>str;
    vector<vector<vector<ll>>> dp(8,vector<vector<ll>>(8,vector<ll>(50,0)));
    vector<vector<vector<bool>>> dp(8,vector<vector<bool>>(8,vector<bool>(50,0)));
    // for(int i=0; i<7; i++)
    // {
    //     for(int j=0; j<7; j++)
    //     {
    //        for(int idx=0; idx<49; idx++)
    //        {
    //           if(i==0 and j==0 and idx==0)
    //           {
    //             dp[i][j][idx]=1;
    //           }
    //           if(str[idx]=='?')
    //           {
    //             if(i+1<=6) dp[i+1][j][idx+1]+=dp[i][j][idx];
    //             if(i-1>=0) dp[i-1][j][idx+1]+=dp[i][j][idx];
    //             if(j+1<=6) dp[i][j+1][idx+1]+=dp[i][j][idx];
    //             if(j-1>=0) dp[i][j-1][idx+1]+=dp[i][j][idx];
    //           }
    //           else
    //           {
    //              if(str[idx]=='D' and j+1<=6) dp[i][j+1][idx+1]+=dp[i][j][idx];
    //              else if(str[idx]=='U' and j-1>=0) dp[i][j-1][idx+1]+=dp[i][j][idx];
    //              else if(str[idx]=='L' and i-1>=0) dp[i-1][j][idx+1]+=dp[i][j][idx];
    //              else if(str[idx]=='R' and i+1<=6) dp[i+1][j][idx+1]+=dp[i][j][idx];
    //           }
    //        }
    //     }
    // }

    dp[0][0][0]=1;
    for(int k=1; k<48; k++)
    {
        for(int i=0; i<7; i++)
        {
            for(int j=0; j<7; j++)
            {
                if(dp[i][j][k]!=0) continue;
                if(i-1>=0 and (str[k-1]=='R' or str[k-1]=='?')) dp[i][j][k]+=dp[i-1][j][k-1];
                if(i+1<=6  and (str[k-1]=='L' or str[k-1]=='?')) dp[i][j][k]+=dp[i+1][j][k-1];
                if(j-1>=0 and (str[k-1]=='D' or str[k-1]=='?')) dp[i][j][k]+=dp[i][j-1][k-1];
                if(j+1<=6 and (str[k-1]=='U' or str[k-1]=='?')) dp[i][j][k]+=dp[i][j+1][k-1];
            }
        }
    }


  cout<<dp[6][0][47]<<endl;

   for(int k=0; k<48; k++)
   {
    cout<<"idx= "<<str[k]<<endl;
    for(int i=0; i<7; i++)
   {
    for(int j=0; j<7; j++)
    {
        cout<<dp[i][j][k]<<" ";
        
    }
    cout<<endl;
   }
   cout<<endl;
   }
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