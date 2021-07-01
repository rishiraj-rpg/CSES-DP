#include <bits/stdc++.h>
using namespace std;

int solve(int n,int count,int sum)
{
    if(n==0){
        
        return 1;
    }
    int cnt=0;
    	for(int i=1;i<7;i++)
	{
	    if(i>n) continue;
	    else
	        cnt=cnt+solve(n-i,count,sum);
	       
	}
	return cnt;
}
int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	 int n;
	 cin>>n;
	 int count=0;
	 int sum=0;
    cout<<solve(n,count,sum);
    
	return 0;
}