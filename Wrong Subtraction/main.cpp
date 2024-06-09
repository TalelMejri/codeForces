#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  int i=1;
   while(i<=k){
    if(n%10!=0){
        n=n-1;
    }else{
        n=n/10;
    }
    i++;
  }
  cout<<n;
}
