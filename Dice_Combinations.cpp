#include <bits/stdc++.h>
using namespace std;

int solve(int n,int dp[])
{
    if(n==0){
        
        return 1;
    }
    if(dp[n]!=-1) return dp[n];
    int cnt=0;
    	for(int i=1;i<7;i++)
	{
	    if(i>n) continue;
	    else
	        cnt=(cnt%1000000007+solve(n-i,dp)%1000000007)%1000000007;
	       
	}
	return dp[n]=cnt;
}
int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	 int n;
	 cin>>n;
  int dp[n+1];
for(int i=0;i<n+1;i++)
{
    dp[i]=-1;
}
    cout<<solve(n,dp);
    
	return 0;
}