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
    vector<pair<int,int>>v;
    vector<int>room(n,0);
    int new_room=1;
    vector<int>id_room(n);
    for(int i=0; i<n; i++)
    {
        int l,r;
        cin>>l>>r;
        v.push_back({l,r});
    }
   // sort(all(v));
    deque<int>s;
    int ans=0;   //this is ultimately O(n^2) code... 
    for(int i=0; i<n; i++)
    {
        int l=v[i].first;
        int r=v[i].second;
        auto it=lower_bound(all(s),l);   //O(n)
        if(it==s.begin())
        {
            room[i]=new_room;
            id_room[new_room]=r;
            new_room++;
            s.push_front(r);
        }
        else
        {
            it--;
            int idx=find(all(id_room),*it)-id_room.begin();   //O(n)
            room[i]=idx;
            *it=r;
        }
        if(s.size()>ans) ans=s.size();
    }
    cout<<ans<<endl;
    printv(room);

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