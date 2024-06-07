#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   int compt=0;
   while(t--){
    string test;
    cin>>test;
    for(int i=0;i<test.length();i++){
        if(test[i]=='+' && test[i+1]=='+'){
            compt+=1;
        }else if(test[i]=='-' && test[i+1]=='-'){
            compt-=1;
        }
    }
   }
   cout<<compt<<endl;
}
