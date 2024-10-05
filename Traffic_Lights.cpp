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
    int n,q;
    cin>>n>>q;
    set<int>sz;
    map<int,int>mp;
    set<int>s;

    for(int k=1; k<=q; k++)
    {
        //cout<<k<<endl;
        int x;
        cin>>x;
        auto it=s.lower_bound(x);
        if(s.empty())
        {
           sz.insert(x);
           sz.insert(n-x);
           mp[x]++;
           mp[n-x]++;
           s.insert(x);
          
        }
        else if(it==s.end())
        {
            --it;
            int dif=n-*it;
            mp[dif]--;
            if(mp[dif]==0)
            {
               
                   sz.erase(dif);
                   
                 
            }
           
            int nw1=x-*it;
            int nw2=n-x;
            sz.insert(nw1);
            sz.insert(nw2);
            mp[nw1]++;
            mp[nw2]++;
            s.insert(x);
        }
        else if(it==s.begin())
        {
            int dif=*it;
            mp[dif]--;
            if(mp[dif]==0)
            {
                   sz.erase(dif);
                  
            }
           
            sz.insert(x);
            mp[x]++;
            sz.insert(*it-x);
            mp[*it-x]++;

            s.insert(x);
        }
        else
        {
             int j=*it;
             it--;
             int i=*it;
             int dif=j-i;
             mp[dif]--;
            if(mp[dif]==0)
            {
                   sz.erase(dif);
              
            }
             mp[x-i]++;
             mp[j-x]++;
             sz.insert(x-i);
             sz.insert(j-x);
             s.insert(x);

        }
       // printv(sz);
       int ans=*max_element(all(sz));
        //cout<<sz.size()<<endl;
       cout<<ans<<" ";

    }
   // cout<<sz.size()<<endl;
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