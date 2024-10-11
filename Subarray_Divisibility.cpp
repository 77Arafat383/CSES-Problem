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
const ll N=1e9;




void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    ll sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=(sum+v[i]+N*n)%n;
        v[i]=sum;

    }
    ll ans=0;
   // printv(v);
    map<ll,ll>mp;
   // printv(v);
    for(int i=0; i<=n; i++) 
    {
        ans+=mp[v[i]];
        mp[v[i]]++;
    }
    // printm(mp);
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