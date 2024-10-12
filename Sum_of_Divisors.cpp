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

ll binex(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }
    return ans;
}
ll sum(ll n)
{
    ll ans=(n*(n-1))%M;
    ans=(ans*binex(2,M-2))%M;
    return ans;

}

void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>range;
    ll r=1;
    ll q=n/r;
    range.push_back({r,q});
    while(r<=n)
    {
        r=n/q +1;
        q=n/r;
        range.push_back({r,q});


    }
    //for(auto &[x,y]:range) cout<<x<<" "<<y<<endl;
    ll ans=0;
    for(int i=0; i<range.size()-1; i++)
    {
        ll lo=range[i].first%M;
        ll hi=range[i+1].first%M;
        ll multiplier=range[i].second%M;
        ll dd=(sum(hi)-sum(lo)+M)%M;
        ans=(ans+(dd*multiplier)%M)%M;
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