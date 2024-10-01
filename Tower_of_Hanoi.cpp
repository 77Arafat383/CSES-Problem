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

void tower_of_henoi(int n, int source, int auxiliary, int destination, vector<pair<int,int>>&ans)
{
    if(n==1)
    {
        ans.push_back({source,destination});
        return;
    }
    tower_of_henoi(n-1,source,destination,auxiliary,ans);
    ans.push_back({source,destination});
    tower_of_henoi(n-1,auxiliary,source,destination,ans);

}


void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>>ans;
    tower_of_henoi(n,1,2,3,ans);
    cout<<ans.size()<<endl;
    for(auto &[x,y]:ans) cout<<x<<" "<<y<<endl;
    
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