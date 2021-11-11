#include<bits/stdc++.h>
using namespace std;
int static t[101][1000001];
int static n,sum;
int coin[1000001];
void solve(){
   
    for(int j=0;j<sum+1;j++){
   
    t[0][j]=INT_MAX-1;
    }
    
   
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coin[i-1]<=j){
                t[i][j]=min(1+(t[i][j-coin[i-1]]),t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
  
 
}
int main(){
 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen(“input.txt”,“r”,stdin);
freopen(“output.txt”,“w”,stdout);
#endif
   cin>>n>>sum;
   for(int i=0;i<n;i++){
       cin>>coin[i];
   }
   solve();
   if(t[n][sum]==INT_MAX-1) cout<<-1<<"\n";
   else
   cout<<t[n][sum]<<"\n";

}
