#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    vector<int> dp(n+1,1e9);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        int i2=i;
        while(i2)
        {
            dp[i] = min(dp[i],dp[i-i2%10]+1);
            i2=i2/10;
        }
    }
    return dp[n];
}
int main() {
	
	int n;
	cin>>n;
	cout<<solve(n);
	return 0;
}
