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
    ll n,sum;
    cin>>n>>sum;
    vector<int>v(n+1);
    for(int i=1;i<=n;  i++) cin>>v[i];
    for(int i=1; i<=n; i++) v[i]+=v[i-1];
    int st=0,en=1;
    int ans=0;
    while(en<=n)
    {
        int dd=v[en]-v[st];
        if(dd==sum)
        {
            
            int bt=st;
            while((v[en]-v[bt])==sum and bt<en)
            {
                ans++;
                bt++;
            }
            en++;

        }
        else if(dd>sum) st++;
        else  en++;
        
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