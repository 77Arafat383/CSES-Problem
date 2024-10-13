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
    int n,k;
    cin>>n>>k;
    int rt=sqrt(n);
    vector<vector<int>>grid;
    int cnt=0;
    vector<int>demo;
    for(int i=0; i<n; i++)
    {
        demo.push_back(i+1);
        cnt++;
        if(cnt==rt)
        {
            cnt=0;
            grid.push_back(demo);
            demo.clear();

        }

    }
    if(!demo.empty()) grid.push_back(demo);
    // for(auto &it:grid)
    // {
    //     for(auto &x:it) cout<<x<<' '; cout<<endl;
    // }
    int pos=-1;
    for(int i=0; i<n; i++)
    {
        pos=(pos+k+1)%(n-i);
        int row=0,col=0;
        int tem=pos;
        while(1)
        {
            if(grid[row].size()<=tem)
            {
                tem-=grid[row].size();
                row++;
            }
            else
            {
                col=tem;
               
                cout<<grid[row][col]<<" ";
                grid[row].erase(grid[row].begin()+col);
                break;
            }

        }
        pos--;

    }
    cout<<endl;

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