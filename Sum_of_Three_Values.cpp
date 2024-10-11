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
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    map<ll,vector<int>>mp;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i-1];
        // storing the position.
       mp[v[i-1]].push_back(i);
    }

    sort(all(v));

    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            ll target=x-(v[i]+v[j]);
            int hi=n-1,lo=j+1;
            while(lo<=hi)
            {
                int mid=(hi+lo)/2;
                if(v[mid]==target)
                {
                    vector<int>ans;
                    ans.push_back(mp[v[i]].back());
                    mp[v[i]].pop_back();
                    ans.push_back(mp[v[j]].back());
                    mp[v[j]].pop_back();
                    ans.push_back(mp[v[mid]].back());
                    sort(all(ans));
                    printv(ans);
                    
                    return;
                }
                else if(v[mid]<target)
                {
                    lo=mid+1;
                }
                else
                {
                    hi=mid-1;
                }
            }
        }
        
    }
    cout<<"IMPOSSIBLE\n";

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