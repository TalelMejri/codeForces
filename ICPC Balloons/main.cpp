#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string c;
    cin>>c;
    map<int,bool> occ;
    int ans=0;
    for(int i=0;i<n;i++){
        if(occ.find(c[i])!=occ.end()){
            ans++;
        }else{
            occ[c[i]]=1;
            ans+=2;
        }
    }
    cout<<ans<<endl;
  }
}
