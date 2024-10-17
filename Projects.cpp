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

struct Project
{
    int st,en,wt;

};
bool cmp(Project a, Project b)
{
    return (a.en<b.en);
}
int previous(vector<Project>&v,int &idx)
{
    int lo=0,hi=idx-1; 
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(v[mid].en<v[idx].st)
        {
            if(v[mid+1].en<v[idx].st)
            {
                lo=mid+1;
            }
            else
            {
                return mid;
            }
        }
        else
        {
            hi=mid-1;
        }
    }
    return -1;

}

void solve()
{
    int n;
    cin>>n;
    vector<Project>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].st>>v[i].en>>v[i].wt;
    }
    sort(all(v),cmp);

    vector<ll>dp(n+1,0);
    dp[0]=v[0].wt;
    for(int i=1; i<n; i++)
    {
        dp[i]=dp[i-1]; // not take.. 
        int j=previous(v,i);
        ll salary=v[i].wt; //current salary.. 
        if(j!=-1) salary+=dp[j]; // added to previous non overlapped salary.. 
        dp[i]=max(dp[i],salary);

    }
    cout<<dp[n-1]<<endl;
    return;

    
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