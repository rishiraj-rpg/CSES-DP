#include <bits/stdc++.h>
using namespace std;

int solve(int n,int sum,int a[],int dp[])
{
    if(sum==0){
        
        return 1;
    }
    if(dp[sum]!=-1) return dp[sum];
    if(sum<0) return 0;
    int cnt=0;
    	for(int i=0;i<n;i++)
	{
	    if(a[i]>sum) continue;
	    else
	        cnt=(cnt%1000000007+solve(n,sum-a[i],a,dp)%1000000007)%1000000007;
	       
	}
	return dp[sum]=cnt;
}
int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	 int n,sum;
	 cin>>n>>sum;
	 int count=0;
	 int a[n];int dp[sum+1];
	 for(int i=0;i<n;i++)
	 {
	     cin>>a[i];
	 }
	 for(int i=0;i<=sum;i++)
	 {
	     dp[i]=-1;
	 }
    cout<<solve(n,sum,a,dp);
    
	return 0;
}
