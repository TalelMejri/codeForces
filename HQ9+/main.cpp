#include <iostream>

using namespace std;

int main()
{
  string ch;
  cin>>ch;
  int trouve=-1;
  for(int i=0;i<ch.size();i++){
    if(ch[i]=='H' || ch[i]=='Q' || ch[i]=='9'){
        trouve=i;
    }
  }
  if(trouve==-1){
    cout<<"NO";
  }
  else{
    cout<<"YES";
  }
}
