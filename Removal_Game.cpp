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
    cin >> n;  
    vector<int> arr(n);
    
   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
   
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    
   
    for (int i = 0; i < n; i++) {
        dp[i][i] = arr[i];
    }
    
   
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i <= n - length; i++) {
            int j = i + length - 1;
            dp[i][j] = max(arr[i] - dp[i + 1][j], arr[j] - dp[i][j - 1]);
        }
    }
    
   
    ll result = (accumulate(arr.begin(), arr.end(), 0LL) + dp[0][n-1]) / 2;
    
    cout << result << endl;
    
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