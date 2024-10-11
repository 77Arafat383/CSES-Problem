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
    int n,m;
    cin>>n>>m;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    vector<int>pos(n+4);
    for(int i=1; i<=n; i++)
    {
        pos[v[i]]=i;
    }
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans+=(pos[v[i]]>pos[v[i]+1]);
    }
    w(m)
    {
        int l,r;
        cin>>l>>r;
        set<pair<int,int>>changed;
        if(v[l]+1<=n) changed.insert({v[l],v[l]+1});
        if(v[l]-1>=1) changed.insert({v[l]-1,v[l]});
        if(v[r]+1<=n) changed.insert({v[r],v[r]+1});
        if(v[r]-1>=1) changed.insert({v[r]-1,v[r]});

        for(auto &[x,y]:changed)
        {
            ans-=(pos[x]>pos[y]);
        }
        swap(v[l],v[r]);
        pos[v[l]]=l;
        pos[v[r]]=r;
        
        for(auto &[x,y]:changed)
        {
            ans+=(pos[x]>pos[y]);
        }
        cout<<ans<<endl;
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