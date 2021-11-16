#include <bits/stdc++.h>
using namespace std;
static int dp[5001][5001];
int solve(int i,int j,string &s1,string &s2)
{
    if(i==s1.length() || j==s2.length()) 
     return max(s1.length()-i,s2.length()-j);
     
    if(dp[i][j]!=-1) return dp[i][j];
    
    int ans;
    if(s1[i]==s2[j]) ans = solve(i+1,j+1,s1,s2);
    else{
        int op1 = 1 + solve(i,j+1,s1,s2); // insert
        int op2 = 1 + solve(i+1,j+1,s1,s2); // replace
        int op3 = 1 + solve(i+1,j,s1,s2); // remove
        
        ans = min(op1,min(op2,op3));
    }
    return dp[i][j] = ans;
}
int main() {
	
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	string s1,s2;
	memset(dp,-1,sizeof(dp));
	cin>>s1>>s2;
	cout<<solve(0,0,s1,s2);
	
	return 0;
}
