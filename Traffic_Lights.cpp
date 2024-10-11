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
    int n,q;
    cin>>n>>q;
    set<pair<int,int>>s;
    multiset<int>length;
    s.insert({0,n});
    length.insert(n);
    w(q)
    {
        int p;
        cin>>p;
        
               auto it=s.upper_bound({p,0});
               it--;
               
                s.insert({it->first,p});
                s.insert({p,it->second});
                auto bt=length.upper_bound(it->second-it->first);
                bt--;
                length.erase(bt);
                length.insert(p-it->first);
                length.insert(it->second-p);
                cout<<*length.rbegin()<<" ";
                 s.erase({it->first,it->second});
                
       
    }
    cout<<endl;

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