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
const int N=2e5+10;




void solve()
{
    int n;
    cin>>n;
    queue<int>q;
    bool ok=false;
    for(int i=1; i<=n; i++)
    {
        if(i&1)
        {
            q.push(i);
            ok=true;

        } 
        else 
        {
            cout<<i<<" ";
            ok=false;

        }



    }
    while(!q.empty())
    {
        if(ok)
        {
            int i=q.front();
            cout<<i<<" ";
            q.pop();
            ok=false;
        }
        else
        {
            int i=q.front();
            q.pop();
            q.push(i);
            ok=true;
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