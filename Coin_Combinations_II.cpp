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


//this is tabuler format. 

void solve()
{
    int n,sum;
    cin>>n>>sum;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    sort(all(v));
    vector<int>dp(sum+10,0);
    dp[0]=1;  //base initialization
    for(int i=0; i<n; i++)
    {
        for(int j=v[i]; j<=sum; j++)    
        {
            dp[j]=(dp[j]+dp[j-v[i]])%M;
        }
    }
    cout<<dp[sum]<<endl;
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