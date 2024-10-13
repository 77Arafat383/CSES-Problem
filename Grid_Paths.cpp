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


void f(int idx, int x, int y, string &str, ll &ans)
{
    if(x==6 and y==0 and idx==str.size())
    {
        ans++;
        return ;
    }
    if(x>6 or x<0 or y>6 or y<0 or idx==str.size())
    {
        
        return;
    }
    if(str[idx]!='?')
    {
        if(str[idx]=='R') f(idx+1,x+1,y,str,ans);
        else if(str[idx]=='L') f(idx+1,x-1,y,str,ans);
        else if(str[idx]=='U') f(idx+1,x,y-1,str,ans);
        else f(idx+1,x,y+1,str,ans);
    }
    else
    {
        
            str[idx]='R';
            f(idx+1,x+1,y,str,ans);

           str[idx]='L';
            f(idx+1,x-1,y,str,ans);
         

            str[idx]='U';
            f(idx+1,x,y-1,str,ans);
         

          str[idx]='D';
            f(idx+1,x,y+1,str,ans);
        
    }
}

void solve()
{
    string str;
    cin>>str;
    ll ans=0;
    f(0,0,0,str,ans);
    cout<<ans<<endl;
    
}

void sample()
{
    for(int i=0; i<46;  i++)
    {
        cout<<'?';

    }
    cout<<endl;
    for(int i=1; i<=46; i++)
    {
        if(i%4==1) cout<<'R';
        else if(i%4==2) cout<<'D';
        else if(i%4==3) cout<<'L';
        else cout<<'U';
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
//sample();
solve();
}
    return 0;
}