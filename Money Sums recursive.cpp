#include <bits/stdc++.h>
using namespace std;
static int dp[501][501];
set<int> s;
void solve(int ind,int a[],int sum,int n)
{
  if(ind==n){
      s.insert(sum);
      return;
  }
   solve(ind+1,a,sum+a[ind],n);
   solve(ind+1,a,sum,n);
  
}
int main() {
	
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int n,sum;sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  
    set<int> ans;
    solve(0,a,sum,n);
    cout<<s.size()-1<<"\n";
    for(auto it:s) {
        if(it!=0)
        cout<<it<<" ";
    }
    
	return 0;
}
