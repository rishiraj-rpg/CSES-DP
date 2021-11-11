#include <bits/stdc++.h>
using namespace std;

int solve(int n,int sum,int a[])
{
    if(sum==0){
        
        return 1;
    }
    if(sum<0) return 0;
    int cnt=0;
    	for(int i=0;i<n;i++)
	{
	    if(a[i]>sum) continue;
	    else
	        cnt=cnt+solve(n,sum-a[i],a);
	       
	}
	return cnt;
}
int main() {
	
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	 int n,sum;
	 cin>>n>>sum;
	 int count=0;
	 int a[n];
	 for(int i=0;i<n;i++)
	 {
	     cin>>a[i];
	 }
    cout<<solve(n,sum,a);
    
	return 0;
}
