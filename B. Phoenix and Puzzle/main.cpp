#include <bits/stdc++.h>

using namespace std;


bool IsSquare(int n){
    int x=sqrt(n);
    if(n==x*x){
        return true;
    }
    return false;
}


int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if((n%2==0 && IsSquare(n/2)) || (n%4==0 && IsSquare(n/4))){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  }
}
