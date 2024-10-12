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
 
 
int binex(int a, int b)
{
    int ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*1LL*a)%M;
        }
        a=(a*1LL*a)%M;
        b>>=1;
    }
    return ans;
}
 
int number_of_divisors(vector<pair<int,int>>&v)
{
    int ans=1;
    for(auto &[p,a]:v)
    {
        ans=(ans*1LL*(a+1)%M)%M;
    }
    return ans;
 
}
 
 
int calculate(int p, int a)
{
    
    int deno=(p-1+M)%M;
    deno=binex(deno,M-2);
    int neno=(binex(p,(a+1)%M)-1+M)%M;
    int ans= (deno*1LL*neno)%M;
    return ans;
}
int sum_calculation(vector<pair<int,int>>&v)
{
    int ans=1;
    for(auto &[p,a]:v)
    {
        ans=(ans*1LL*calculate(p,a))%M;
    }
    return ans;
 
}
 
int product_calculation(vector<pair<int,int>>&v )
{
    int cnt=1;
    int ans=1;
    for(auto &[p,a]:v)
    {
        ans=binex(ans,(a+1)%M);
        int dd=binex(p,(a*1LL*(a+1)%M)/2);
        ans=(ans*1LL*binex(dd,cnt))%M;
        cnt=(cnt*1LL*(a+1))%(M-1);
    }
    return ans;
    
 
 
}
 
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=1; i<=n; i++)
    {
        int p,a;
        cin>>p>>a;
        v.push_back({p,a});
    }
    int num_div=number_of_divisors(v);
    cout<<num_div<<" ";
    int sum_cal=sum_calculation(v);
    cout<<sum_cal<<" ";
    int product=product_calculation(v);
    cout<<product<<endl;
    
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
