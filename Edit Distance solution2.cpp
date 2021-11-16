#include <bits/stdc++.h>
using namespace std;
static int dp[5001][5001];
int solve(int i,int j,string &s1,string &s2,int n,int m)
{
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 ){
                dp[i][j]=j;
            }
            if(j==0){
                dp[i][j]=i;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
           if(s1[i-1]==s2[j-1]){
               dp[i][j] = dp[i-1][j-1];
           }
           else{
               dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
           }
        }
    }
    return dp[n][m];
}
int main() {

	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	string s1,s2;
	memset(dp,0,sizeof(dp));
	cin>>s1>>s2;
	int n = s1.length();
	int m = s2.length();
	cout<<solve(0,0,s1,s2,n,m);
	
	return 0;
}
