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
    string str;
    cin>>str;
    map<char,int>mp;
    int n=str.size();
    for(int i=0; i<n; i++)
    {
        mp[str[i]]++;
    }
    char ch='.';
    bool ok=false;
    if(n&1)
    {
        ok=true;

    }
    string ans;
    vector<char>v;
    for(auto &[x,y]:mp)
    {
        if(ok and (y&1))
        {
            ch=x;
            ok=false;
        }
        else if(y&1)
        {
            cout<<"NO SOLUTION\n";
            return;
        }
        else
        {
            for(int i=0; i<y/2; i++)
            {
                ans.push_back(x);
            }
            y/=2;
            v.push_back(x);
        }
    }
    if(ch!='.')
    {
        for(int i=0; i<mp[ch]; i++)
        {
            ans.push_back(ch);
        }
    }
    rev(v);
   
    
    for(auto &cc:v)
    {
        for(int i=0; i<mp[cc]; i++)
        {
            ans.push_back(cc);
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