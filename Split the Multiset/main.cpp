#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    if(n==1){
        cout<<"0"<<endl;
    }else{
      int ans=1;
      while(n>0){
        n-=k;
        ans++;
      }
      cout<<ans<<endl;
    }
  }
}
