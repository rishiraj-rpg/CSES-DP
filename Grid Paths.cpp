#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int n;
	cin>>n;
	char grid[n][n];
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cin>>grid[i][j];
	      
	    }
	}
	int dp[n][n];
		for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	      dp[i][j]=0;
	     
	    }
	}
	
	dp[n-1][n-1]=1;
	for(int i=n-1;i>=0;i--)
	{
	    for(int j=n-1;j>=0;j--)
	    {
	        if(grid[i][j]=='*'){
	           dp[i][j]=0;
	       }
	       else{
	       if(i<n-1){
	           dp[i][j]+=dp[i+1][j];
	       }
	       if(j<n-1)
	       {
	           dp[i][j]+=dp[i][j+1];
	       }
	       dp[i][j] %= 1000000007;
	       }
	    }
	}
	//or this also works
// 	for(int i = 0; i < n; i++) {
// 		for(int j = 0; j < n; j++) {
// 			if(grid[i][j]=='*') dp[i][j] = 0;
// 			else {
// 				if(i > 0) dp[i][j] += dp[i - 1][j];
// 				if(j > 0) dp[i][j] += dp[i][j - 1];
// 				dp[i][j] %= 1000000007;
// 			}
// 		}
// 	}
	cout<<dp[0][0]<<"\n";
	
	
	return 0;
}
