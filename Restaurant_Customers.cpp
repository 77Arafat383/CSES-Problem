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
    multiset<int>s;
    map<int,int>storage;
    int n;
 
    cin>>n;
    vector<pair<int,int>>vv;
    for(int i=0; i<n; i++)
    {
        int l,r;
        cin>>l>>r;
        s.insert(l);
        s.insert(r);
        vv.push_back({l,r});
        
        
    }
    vector<int>v;
    for(auto &i:s) v.push_back(i);
    for(int i=0; i<n; i++)
    {
        storage[vv[i].first]++;
        auto it=s.upper_bound(vv[i].second);
        if(it==s.end()) continue;
        storage[*it]--;
    }
    for(int i=1; i<v.size(); i++)
    {
        storage[v[i]]+=storage[v[i-1]];
    }
    int mx=0;
    // printm(storage);
    for(auto &[x,y]:storage) mx=max(mx,y);
    cout<<mx<<endl;
    
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