#include <iostream>

using namespace std;

int main()
{
  string ch;
  cin>>ch;
  int nb=0;
  for(int i=0;i<ch.size();i++){
       if(ch[i]==ch[i+1]){
            nb++;
            if(nb>=6){
                break;
            }
       }else{
            nb=0;
       }
  }
    if(nb==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

}
