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

void f(int i, int &n, set<char>s,vector<int>num,vector<string>&ans,string tem,char ch)
{
    if(i!=0)
    {
        tem.push_back(ch);
        num[ch-'a']--;
        if(num[ch-'a']==0) s.erase(ch);
    }
    if(i==n)
    {
        ans.push_back(tem);
        return;
    }

    for(auto &ch:s)
    {
        f(i+1,n,s,num,ans,tem,ch);

    }
    return;

}

void solve()
{
    string str;
    cin>>str;
    int n=str.size();
    set<char>s;
    vector<int>num(26,0);
    for(int i=0; i<n; i++)
    {
        num[str[i]-'a']++;
        s.insert(str[i]);
    }
    vector<string>ans;
    string tem;
    f(0,n,s,num,ans,tem,'a');
    cout<<ans.size()<<endl;
    for(auto &it:ans) cout<<it<<endl;
    
    
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