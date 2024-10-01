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
    
    vector<deque<char>>dq,pv;
    deque<char>dd;
    dd.push_back('0');
    dq.push_back(dd);
    dd.clear();
    dd.push_back('1');
    dq.push_back(dd);
    pv=dq;
    for(int i=2; i<=n; i++)
    {
        
        
        for(int j=0; j<pv.size(); j++)
        {
           
            pv[j].push_front('0');
        }
        for(int j=dq.size()-1; j>=0; j--)
        {
            dq[j].push_front('1');
            pv.push_back(dq[j]);
        }
        dq=pv;

    }
    for(auto &str:pv)
    {
        for(int i=0; i<str.size(); i++) cout<<str[i]; cout<<endl;
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