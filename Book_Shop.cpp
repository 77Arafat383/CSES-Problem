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
    int n,sum;
    cin>>n>>sum;
    vector<int>price(n),page(n);
    for(auto &it:price) cin>>it;
    for(auto &it:page) cin>>it;
    vector<int>dp(sum+2,0);

    for(int i=0; i<n; i++)
    {
        for(int j=sum; j>0; j--)
        {
            if(price[i]>j) continue;
            dp[j]=max(dp[j],dp[j-price[i]]+page[i]);

        }
    }
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