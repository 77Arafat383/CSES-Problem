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

bool calculation(vector<ll>&v,ll &n,ll &mid, ll &k)
{
    ll part=0;
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=v[i];
        if(sum>mid)
        {
            part++;
            sum=v[i];
        }


    }
    if(sum>0) part++;
    return (part<=k);
}


void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    ll lo=*max_element(all(v));
    ll hi=0;
    for(auto &it:v) hi+=it;
    ll ans=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        if(calculation(v,n,mid,k))
        {
            ans=mid;
            hi=mid-1;
        }
        else
        {
           lo=mid+1;
        }

    }
    cout<<ans<<endl;
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