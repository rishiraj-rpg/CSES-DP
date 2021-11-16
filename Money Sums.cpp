#include <bits/stdc++.h>
using namespace std;
 
int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    set<int> s;
    int x;
    while(n--){
        vector<int> v;
        cin>>x;
        if(s.size()==0){
            s.insert(x);
            continue;
        }
        for(auto it:s){
            v.push_back(it+x);
        }
        v.push_back(x);
        for(auto it:v){
            s.insert(it);
        }
    }
    cout<<s.size()<<"\n";
    for(auto it:s){
        cout<<it<<" ";
    }
	return 0;
}
