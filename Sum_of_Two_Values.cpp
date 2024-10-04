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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    if(n==1)
    {
       cout<<"IMPOSSIBLE\n";
       return;
    }
    map<int,vector<int>>idx;
    for(int i=1; i<=n; i++)
    {
        idx[v[i-1]].push_back(i);
    }
    for(int i=0; i<n; i++)
    {
        if(idx[k-v[i]].size()!=0 and k!=v[i]*2)
        {
            cout<<i+1<<" "<<idx[k-v[i]].back()<<endl;
            return;
        }
        else if(k==v[i]*2 and idx[v[i]].size()>=2)
        {
            cout<<idx[v[i]][0]<<" "<<idx[v[i]][1]<<endl;
            return;

        }
    }
  
    cout<<"IMPOSSIBLE\n";
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