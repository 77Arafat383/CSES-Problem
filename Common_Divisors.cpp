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
const int N=1e6;




void solve()
{
    int n;
    cin>>n;
   vector<int>mp(N+1,0);
   
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
        
    }
    
    for(int i=1e6; i>=1; i--)
    {
        int cnt=0;
        for(int j=i; j<=1e6; j+=i)
        {
            cnt+=mp[j];
            if(cnt>=2)
            {
                cout<<i<<endl;
                return;
            }
        }
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