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
    ll x,y;
    cin>>x>>y;
    ll mx=max(x,y);
    if(mx&1)
    {
        ll total=mx*mx;
        if(x>y)
        {
            ll ans=total-(x+(x-y)-1);
            cout<<ans<<endl;
            return;
        }
        else
        {
            ll ans=total-(x-1);
            cout<<ans<<endl;
            return;
        }
    }
    else
    {
        mx--;
        ll total=mx*mx +1;
        ll ans;
        if(x>y)
        {
            ans=total+(x+(x-y)-1);
            
        }
        else
        {
            ans=total+x-1;
        }
        cout<<ans<<endl;
        return;
    }
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}