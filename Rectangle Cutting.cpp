#include <bits/stdc++.h>
using namespace std;
static int dp[501][501];
int solve(int a,int b)
{
   for(int i=1;i<=a;i++){
       for(int j=1;j<=b;j++){
           if(i==j) dp[i][j]=0;
           else{
                dp[i][j] =1e9;
               for(int k=1;k<=i;k++){        // width
                   dp[i][j] = min(dp[i][j],dp[i-k][j] + 1 + dp[k][j]);
               }  
               for(int k=1;k<=j;k++){         // height
                   dp[i][j] = min(dp[i][j],dp[i][j-k] + 1 + dp[i][k]);
               }           
           }
       }
   }
   return dp[a][b];
}
int main() {
	
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int a ;int b;
	
	cin>>a>>b;
	
	cout<<solve(a,b);
	
	return 0;
}
