#include <iostream>

using namespace std;

int main()
{
  string s,t;
  cin>>s>>t;
  int some=true;
  for(int i=0,j=t.size()-1;i<s.size();i++,j--){
     if(s[i]!=t[j]){
        some=false;
     }
  }
  if(some){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
}
