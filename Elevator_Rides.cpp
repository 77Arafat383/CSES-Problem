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
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    vector<int>dp((1<<n)+1,n+1),weight((1<<n)+1,x+1);
    dp[0]=1;
    weight[0]=0;
    for(int mask=0; mask<(1<<n); mask++)
    {
        for(int i=0; i<n; i++)
        {
            if(mask&(1<<i)) continue;
            int n_mask=(mask|(1<<i));
            if(weight[mask]+v[i]<=x)
            {
                 if(dp[n_mask]>=dp[mask])
                 {
                    dp[n_mask]=dp[mask];
                    weight[n_mask]=min(weight[n_mask],weight[mask]+v[i]);
                 }
                 
            }
            else
            {
                 if(dp[n_mask]>=dp[mask]+1)
                 {
                    dp[n_mask]=dp[mask]+1;
                    weight[n_mask]=min(weight[n_mask],v[i]);
                 }


            }
        }
    }
    cout<<dp[(1<<n)-1]<<endl;
    return;
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