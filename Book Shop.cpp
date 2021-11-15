#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int n,x;
	cin>>n>>x;
	int price[n];
	for(int i=0;i<n;i++)
	{
	    cin>>price[i];
	}
	int pages[n];
	for(int i=0;i<n;i++)
	{
	    cin>>pages[i];
	}
    int t[n+1][x+1];
      for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=x;j++){
            
                t[i][j]=0;
            
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=x;j++){
           if(price[i-1]<=j){
               t[i][j]=max(t[i-1][j],t[i-1][j-price[i-1]]+pages[i-1]);
           }
           else{
               t[i][j]=t[i-1][j];
           }
        }
    }
    cout<<t[n][x]<<"\n";

	return 0;
}
