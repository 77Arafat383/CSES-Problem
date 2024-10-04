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
    int n;
    cin>>n;
    vector<pair<int,int>>m;
    for(int i=0; i<n;i++)
    {
        int st,en;
        cin>>st>>en;
        m.push_back({en,st});
    }
    sort(all(m));
    int ans=0;
    int pin=0;
    for(int i=0; i<n; i++)
    {
        if(pin<=m[i].second)
        {
            ans++;
            pin=m[i].first;
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