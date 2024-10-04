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
    int n,m,k;
    cin>>n>>m>>k;
    map<int,int>freq;
    set<int>s;
    vector<int>v(m);
    for(int i=0; i<n;  i++)
    {
        int x;
        cin>>x;
        s.insert(x);
        freq[x]++;
    }
    for(int i=0; i<m; i++) cin>>v[i];
    int ans=0;
    sort(all(v));
    for(int i=0; i<m; i++)
    {
        auto it=s.lower_bound(v[i]-k);
        if(abs(*it-v[i])<=k and it!=s.end())
        {
            ans++;
            freq[*it]--;
            if(freq[*it]==0) 
            {
                s.erase(*it);
            }
            continue;
        }
        auto bt=s.lower_bound(v[i]);
        if(abs(*bt-v[i])<=k and bt!=s.end())
        {
            ans++;
            freq[*bt]--;
            if(freq[*bt]==0) 
            {
                s.erase(*bt);
            }
            continue;
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