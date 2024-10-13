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

bool  cmp (pair<int,pair<int,int>>a , pair<int,pair<int,int>>b)
{
    
        if(a.first==b.first)
        {
            return (a.second.first>=b.second.first);
        }
        return (a.first<=b.first);
    
    
}


void solve()
{
    int n;
    cin>>n;
    vector<pair<ll,pair<ll,ll>>>v;
    multiset<int>a,b;
    vector<int>jalem(n+1,0),majlum(n+1,0);
    for(int i=1; i<=n; i++)
    {
        ll l,r;
        cin>>l>>r;
        v.push_back({l,{r,i}});
        a.insert(r);

    }
    b=a;
    sort(all(v),cmp);
    // for(auto &[x,y]:v)
    // {
    //     cout<<x<<" "<<y.first<<endl;
    // }
    //calculating for majlum;
    for(int i=n-1; i>=0; i--)
    {
        auto r=v[i].second;
        auto it=a.lower_bound(r.first);
        it++;
        if(it!=a.end())
        {
            auto bt=it;
            while(bt!=a.end())
            {
                majlum[r.second]++;
                bt++;

            }
            
        }
        it--;
        a.erase(it);
       
       
    }

    for(int i=0; i<n; i++)
    {
        auto r=v[i].second;
        auto it=b.upper_bound(r.first);
        it--;
        
        if(it!=b.begin())
        {
            auto bt=it;
            while(bt!=b.begin())
            {
                   jalem[r.second]++;
                   bt--;
            }
            
        }
        b.erase(it);
    }
     for(int i=1; i<=n; i++) cout<<jalem[i]<<" "; cout<<endl;
     for(int i=1; i<=n; i++) cout<<majlum[i]<<" "; cout<<endl;
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