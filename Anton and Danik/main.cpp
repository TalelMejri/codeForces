#include <iostream>

using namespace std;

int main()
{
  int n;
  string s;
  cin>>n;
  cin>>s;
  int antone=0;
  int danik=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='A'){
        antone++;
    }else{
        danik++;
    }
  }

  if(antone>danik){
    cout<<"Anton";
  }else if(antone<danik){
    cout<<"Danik";
  }else{
    cout<<"Friendship";
  }
}
